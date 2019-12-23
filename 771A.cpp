#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,x,y; cin>>n>>m;
	vector<vector<int>> adj(n);
	for (int i=0; i<m; i++) {
		cin>>x>>y; x--; y--;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	ll ret=0;
	set<int> vis;
	for (int i=0; i<n; i++) {
		if(vis.find(i)==vis.end()) {
			ll val=0;
			queue<int> q; q.push(i); vis.insert(i);
			while(!q.empty()) {
				int cur=q.front(); q.pop();
				val++;
				for (int nbr : adj[cur]) {
					if(vis.find(nbr)==vis.end()) {
						vis.insert(nbr); q.push(nbr);
					}
				}
			}
			ret+=val*(val-1)/2;
		}
	}

	if(ret==m) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
