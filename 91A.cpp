#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s,t; cin>>s>>t;
	unordered_map<char,set<int>> mp;
	int n=s.size(), m=t.size();
	for (int i=0; i<n; i++)
		mp[s[i]].insert(i);
	int ret=1, cur=0;
	for (int i=0; i<m; i++) {
		char ch=t[i];
		auto it=mp[ch].lower_bound(cur);
		if(it==mp[ch].end()) {
			cur=0; ret++;
			it=mp[ch].lower_bound(cur);
			if(it==mp[ch].end()) {
				cout << -1 << endl;
				return 0;
			}
		}
		cur=(*it)+1;
	}
	cout << ret << endl;
	return 0;
}
