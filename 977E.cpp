#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool ok(set<int> &st, vector<int> &deg) {
	for (int x : st)
		if(deg[x]!=2)
			return false;
	return true;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	vector<vector<int>> adj(n);
	vector<int> deg(n);
	for (int i=0; i<m; i++) {
		int u,v; cin>>u>>v; u--; v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
		deg[u]++; deg[v]++;
	}

	int ret=0;
	vector<bool> vis(n,false);
	for (int i=0; i<n; i++) if(!vis[i]) {
		set<int> st;
		queue<int> q; q.push(i);
		while(!q.empty()) {
			int cur=q.front(); q.pop();
			st.insert(cur);
			for (int nxt : adj[cur])
				if(!vis[nxt])
					q.push(nxt),
					vis[nxt]=true;
		}
		if(ok(st,deg))
			ret++;
	}
	cout << ret << endl;
	return 0;
}
