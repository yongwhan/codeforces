#include<bits/stdc++.h>
using namespace std;

set<int> vis;
double eval(int cur, int n, vector<vector<int> > &adj, vector<int> &deg) {
	vector<int> nbr=adj[cur];
	int sz=nbr.size();
	double ret=0;
	for (int i=0; i<sz; i++) {
		int nxt=nbr[i];
		if(vis.find(nxt)==vis.end())
			vis.insert(nxt),
			ret+=(1+eval(nxt,n,adj,deg))/(deg[cur]-1);
	}
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<vector<int> > adj(n);
	vector<int> deg(n,0);
	deg[0]++;
	for (int i=0; i<n-1; i++) {
		int u,v; cin>>u>>v; u--; v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
		deg[u]++; deg[v]++;
	}
	vis.insert(0);
	cout << setprecision(10) << fixed << eval(0,n,adj,deg) << endl;
	return 0;
}
