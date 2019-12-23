#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	map<set<char>, ll> ct;
	for (int i=0; i<n; i++) {
		string s; cin>>s;
		map<char,int> cur;
		for (auto ch : s)
			cur[ch]++;
		set<char> key;
		for (auto it : cur)
			if(it.second%2)
				key.insert(it.first);
		ct[key]++;
	}

	ll ret=0;
	set<char> cur;
	for (auto it : ct) {
		ret+=it.second*(it.second-1)/2;
		cur=it.first;
		for (char ch='a'; ch<='z'; ch++) {
			if(cur.find(ch)!=cur.end())
				continue;
			cur.insert(ch);
			if(ct.find(cur)!=ct.end())
				ret+=it.second*ct[cur];
			cur.erase(ch);
		}
	}
	cout << ret << endl;
	return 0;
}
