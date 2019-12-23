#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<vector<ii>> adj(n);
	int u,v,c;
	for (int i=0; i<n-1; i++) {
		cin>>u>>v>>c;
		adj[u].push_back({v,c});
		adj[v].push_back({u,c});
	}

	vector<int> cost(n,0);
	queue<int> q; q.push(0);
	set<int> vis; vis.insert(0);
	while(!q.empty()) {
		int cur=q.front(); q.pop();
		for (auto nxt : adj[cur]) {
			if(vis.find(nxt.first)==vis.end()) {
				vis.insert(nxt.first);
				cost[nxt.first]=max(cost[nxt.first], cost[cur]+nxt.second);
				q.push(nxt.first);
			}
		}
	}
	cout << *max_element(cost.begin(), cost.end()) << endl;
	return 0;
}
