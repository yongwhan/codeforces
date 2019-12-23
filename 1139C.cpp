#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mod=1e9+7;

ll pwr(ll n, int k) {
	ll ret=1;
	for (int i=0; i<k; i++)
		ret=(ret*n)%mod;
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,k,u,v,x; cin>>n>>k;
	vector<vector<ii>> adj(n);
	for (int i=0; i<n-1; i++) {
		cin>>u>>v>>x; u--; v--;
		adj[u].push_back({v,x});
		adj[v].push_back({u,x});
	}

	ll ret=pwr(n,k);
	set<int> vis;
	for (int i=0; i<n; i++) {
		if(vis.find(i)!=vis.end())
			continue;
		vis.insert(i);
		queue<int> q; q.push(i);
		ll sz=0;
		while(!q.empty()) {
			sz++;
			int cur=q.front(); q.pop();
			for (auto e : adj[cur]) {
				if(e.second)
					continue;
				if(vis.find(e.first)!=vis.end())
					continue;
				q.push(e.first);
				vis.insert(e.first);
			}
		}
		ret=(ret+(mod-pwr(sz,k))%mod)%mod;
	}
	cout << ret << endl;
	return 0;
}
