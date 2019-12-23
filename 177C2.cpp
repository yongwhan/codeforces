#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	int k; cin>>k;
	int u,v;
	map<int,vector<int>> adj;
	for (int i=0; i<k; i++) {
		cin>>u>>v; u--; v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	int m; cin>>m;
	set<ii> st;
	for (int i=0; i<m; i++) {
		cin>>u>>v; u--; v--;
		st.insert({u,v});
		st.insert({v,u});
	}

	int ret=0;
	set<int> vis;
	for (int i=0; i<n; i++) {
		if(vis.find(i)==vis.end()) {
			vis.insert(i);
			vector<int> group;
			queue<int> q; q.push(i);
			while(!q.empty()) {
				int cur=q.front(); q.pop();
				group.push_back(cur);
				for (auto nxt : adj[cur]) {
					if(vis.find(nxt)==vis.end())
						vis.insert(nxt), q.push(nxt);
				}
			}
			bool ok=true;
			for (auto u : group)
				for (auto v : group)
					if(st.find({u,v})!=st.end()) {
						ok=false;
						break;
					}
			if(ok) ret=max(ret,(int) group.size());
		}
	}
	cout << ret << endl;
	return 0;
}
