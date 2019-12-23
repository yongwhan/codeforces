#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k,m; cin>>n>>k>>m;
	vector<string> s(n);
	vector<int> a(n);
	map<string,int> mp;
	for (int i=0; i<n; i++) cin>>s[i];
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<n; i++) mp[s[i]]=a[i];
	for (int i=0; i<k; i++) {
		int x; cin>>x;
		vector<int> g(x);
		int cur=2e9;
		for (int j=0; j<x; j++)
			cin>>g[j], g[j]--, cur=min(cur,a[g[j]]);
		for (int j=0; j<x; j++)
			mp[s[g[j]]]=cur;
	}
	ll ret=0;
	string t;
	for (int i=0; i<m; i++)
		cin>>t, ret+=mp[t];
	cout << ret << endl;
	return 0;
}
