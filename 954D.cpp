#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

map<int,int> compute(int n, map<int,vector<int>> &adj, int init) {
	map<int,int> dist;
	dist[init]=0;
	queue<int> q; q.push(init);
	set<int> vis; vis.insert(init);
	while(!q.empty()) {
		int cur=q.front(); q.pop();
		for (auto nxt : adj[cur])
			if(vis.find(nxt)==vis.end())
				vis.insert(nxt), dist[nxt]=dist[cur]+1, q.push(nxt);
	}
	return dist;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,s,t; cin>>n>>m>>s>>t; s--; t--;
	map<int,vector<int>> adj;
	set<ii> st;
	for (int i=0; i<m; i++) {
		int u,v; cin>>u>>v; u--; v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
		st.insert({u,v});
		st.insert({v,u});
	}

	map<int,int> ds=compute(n,adj,s), dt=compute(n,adj,t);
	int ret=0;
	for (int x=0; x<n; x++)
		for (int y=x+1; y<n; y++)
			if(st.find({x,y})==st.end())
				if(ds[t]<=min(ds[x]+dt[y],dt[x]+ds[y])+1)
					ret++;
	cout << ret << endl;
	return 0;
}
