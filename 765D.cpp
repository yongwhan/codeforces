#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> f(n+1);
	set<int> st;
	for (int i=1; i<=n; i++) cin>>f[i], st.insert(f[i]);
	for (auto e : st) if(f[e]!=e) {
		cout << -1 << endl; return 0;
	}
	map<int,int> q,g,h;
	int idx=0;
	for (auto e : st) q[e]=++idx;
	for (int i=1; i<=n; i++) g[i]=q[f[i]];
	idx=0;
	for (auto e : st) h[++idx]=e;
	int m=st.size();
	cout << m << endl;
	for (int i=1; i<=n; i++) cout << g[i] << " ";
	cout << endl;
	for (int i=1; i<=m; i++) cout << h[i] << " ";
	cout << endl;
	return 0;
}
