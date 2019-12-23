#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool issuf(string s, string t) {
	reverse(s.begin(), s.end());
	reverse(t.begin(), t.end());
	if(s.size()<t.size())
		return false;
	return (s.substr(0,t.size())==t);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string suf[]={"lios","liala","etr","etra","initis","inites"}, cur;
	vector<int> seq;
	while(cin>>cur) {
		bool ok=false;
		for (int i=0; i<6; i++)
			if(issuf(cur,suf[i]))
				seq.push_back(i), ok=true;
		if(!ok) {
			cout << "NO" << endl;
			return 0;
		}
	}

	int ct=0;
	for (auto x : seq)
		ct+=(x%2);
	if(0<ct&&ct<seq.size()) {
		cout << "NO" << endl;
		return 0;
	}

	int n=seq.size();
	if(n==1) {
		cout << "YES" << endl;
		return 0;
	}

	for (int i=0; i<n; i++)
		seq[i]/=2;

	map<int,int> mp;
	for (auto x : seq)
		mp[x]++;

	if(mp[1]!=1) {
		cout << "NO" << endl;
		return 0;
	}

	for (int i=0; i<n-1; i++)
		if(seq[i]>seq[i+1]) {
			cout << "NO" << endl;
			return 0;
		}
	cout << "YES" << endl;
	return 0;
}
