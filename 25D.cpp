#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int conn(vector<set<int>> &adj) {
	int ret=0, n=adj.size();
	vector<int> vis(n,false);
	for (int i=0; i<n; i++) {
		if(!vis[i]) {
			vis[i]=true;
			ret++;
			queue<int> q; q.push(i);
			while(!q.empty()) {
				int cur=q.front(); q.pop();
				for (auto nxt : adj[cur])
					if(!vis[nxt])
						vis[nxt]=true, q.push(nxt);
			}
		}
	}
	return ret;
}

bool bridge(ii &e, vector<set<int>> &adj) {
	int x=conn(adj);
	adj[e.first].erase(e.second);
	adj[e.second].erase(e.first);
	int y=conn(adj);
	adj[e.first].insert(e.second);
	adj[e.second].insert(e.first);
	return x!=y;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a,b; scanf("%d", &n);
	vector<ii> edge;
	vector<set<int>> adj(n);
	for (int i=0; i<n-1; i++) {
		scanf("%d %d", &a, &b); a--; b--;
		adj[a].insert(b);
		adj[b].insert(a);
		edge.push_back({a,b});
	}

	vector<ii> rem;
	for (auto e : edge) {
		if(!bridge(e,adj)) {
			rem.push_back(e);
			adj[e.first].erase(e.second);
			adj[e.second].erase(e.first);
		}
	}

	vector<int> rep;
	vector<bool> vis(n,false);
	for (int i=0; i<n; i++) {
		if(!vis[i]) {
			vis[i]=true;
			queue<int> q;
			q.push(i);
			rep.push_back(i);
			while(!q.empty()) {
				int cur=q.front(); q.pop();
				for (auto nxt : adj[cur])
					if(!vis[nxt])
						vis[nxt]=true, q.push(nxt);
			}
		}
	}

	int sz=rem.size();
	printf("%d\n", sz);
	for (int i=0; i<sz; i++)
		printf("%d %d %d %d\n", rem[i].first+1, rem[i].second+1, rep[i]+1, rep[i+1]+1);
	return 0;
}
