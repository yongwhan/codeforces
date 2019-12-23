#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,ll> ii;

ll grace(vector<vector<ii>> &adj, int par, int cur) {
	ll ret=0;
	for (auto nxt : adj[cur])
		if(nxt.first!=par)
			ret=max(ret, nxt.second+grace(adj,cur,nxt.first));
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<vector<ii>> adj(n);
	ll ret=0;
	for (int i=0; i<n-1; i++) {
		int x,y,w; cin>>x>>y>>w;
		x--; y--;
		adj[x].push_back({y,w});
		adj[y].push_back({x,w});
		ret+=(w*2);
	}
	ret-=grace(adj,-1, 0);
	cout << ret << endl;
	return 0;
}
