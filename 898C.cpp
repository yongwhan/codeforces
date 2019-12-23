#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

string rev(string s) {
	int n=s.size();
	for (int i=0; i<n/2; i++)
		swap(s[i],s[n-1-i]);
	return s;
}

bool is_suf(string &s, string &t) {
	string u=rev(s), v=rev(t);
	int n=u.size(), m=v.size();
	if(n>m) return false;
	for (int i=0; i<min(n,m); i++)
		if(u[i]!=v[i]) return false;
	return true;
}

vector<string> eval(set<string> &st) {
	vector<string> ret(st.begin(), st.end());
	while(1) {
		int n=ret.size();
		int x=-1;
		for (int i=0; i<n; i++)
			for (int j=0; j<n; j++)
				if(i!=j && is_suf(ret[i], ret[j]))
					x=i;
		if(x==-1)
			return ret;
		ret.erase(ret.begin()+x);
	}
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	map<string,set<string>> mp;
	for (int i=0; i<n; i++) {
		string s,x; cin>>s;
		int m; cin>>m;
		for (int i=0; i<m; i++) {
			cin>>x;
			mp[s].insert(x);
		}
	}

	cout << mp.size() << endl;
	for (auto it=mp.begin(); it!=mp.end(); it++) {
		cout << (*it).first;
		vector<string> val=eval((*it).second);
		cout << " " << val.size();
		for (auto x : val)
			cout << " " << x;
		cout << endl;
	}
	return 0;
}
