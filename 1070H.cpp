#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	map<string,set<int>> mp;
	vector<string> v(n);
	for (int t=0; t<n; t++) {
		cin>>v[t];
		int l=v[t].size();
		for (int i=0; i<l; i++) {
			string cur;
			for (int j=i; j<l; j++) {
				cur+=v[t][j];
				mp[cur].insert(t);
			}
		}
	}

	int q; cin>>q;
	while(q--) {
		string s; cin>>s;
		int sz=mp[s].size();
		if(sz) cout << sz << " " << v[*mp[s].begin()] << endl;
		else cout << "0 -" << endl;
	}
	return 0;
}
