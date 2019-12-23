#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool conn(map<int,vector<int>> &adj, int n) {
	queue<int> q;
	set<int> vis;
	q.push(0); vis.insert(0);
	while(!q.empty()) {
		int cur=q.front(); q.pop();
		for (auto nxt : adj[cur]) {
			if(vis.find(nxt)==vis.end()) {
				q.push(nxt);
				vis.insert(nxt);
			}
		}
	}
	return vis.size()==n;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	if(m!=n-1) {
		cout << "no" << endl;
		return 0;
	}
	map<int,vector<int>> adj;
	int a,b;
	for (int i=0; i<m; i++) {
		cin>>a>>b; a--; b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	cout << (conn(adj,n) ? "yes" : "no") << endl;
	return 0;
}
