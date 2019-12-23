#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int n,m,u,v; cin>>n>>m;
		vector<vector<int>> adj(n);
		for (int i=0; i<m; i++) {
			cin>>u>>v; u--; v--;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}

		vector<int> col(n,-1);
		col[0]=0;
		queue<int> q; q.push(0);
		set<int> vis; vis.insert(0);
		while(!q.empty()) {
			int cur=q.front(); q.pop();
			for (auto nxt : adj[cur]) {
				if(vis.count(nxt)) continue;
				vis.insert(nxt);
				col[nxt]=1-col[cur];
				q.push(nxt);
			}
		}

		map<int,int> ct;
		for (int i=0; i<n; i++)
			ct[col[i]]++;

		int idx=0;
		if(ct[0]>ct[1]) idx=1;
		cout<<ct[idx]<<endl;
		for (int i=0; i<n; i++)
			if(col[i]==idx)
				cout<<i+1<<" ";
		cout<<endl;
	}
	return 0;
}
