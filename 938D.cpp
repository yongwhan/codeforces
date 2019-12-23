#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mx=2e5+777;

int n, m;
vector<ll> a,d;
vector<pair<int, ll>> adj[mx];

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	cin>>n>>m;
	a=vector<ll>(n);
	d=vector<ll>(n);
	ll v,u,w;
	for (int i=0; i<m; i++)
		cin>>v>>u>>w, v--, u--, w<<=1, adj[v].push_back({u,w}), adj[u].push_back({v,w});
	for (int i=0; i<n; i++)
		cin>>a[i];
	set<pair<ll, int>> pq;
	for (int i=0; i<n; i++)
		d[i]=a[i], pq.insert({d[i],i});
	while (!pq.empty()) {
		v=pq.begin()->second;
		pq.erase(pq.begin());
		for (auto it : adj[v]) {
			u=it.first; w=it.second;
			if (d[u]>d[v]+w)
				pq.erase({d[u],u}), d[u]=d[v]+w, pq.insert({d[u], u});
		}
	}
	for (int i=0; i<n; i++)
		cout<<d[i]<<" ";
	cout<<"\n";
	return 0;
}
