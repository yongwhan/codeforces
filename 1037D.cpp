#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<set<int>> adj(n);
	int x,y;
	for (int i=0; i<n-1; i++)
		cin>>x>>y,
		x--, y--,
		adj[x].insert(y), adj[y].insert(x);

	vector<int> v(n);
	for (int i=0; i<n; i++)
		cin>>v[i], v[i]--;

	map<int,int> parent;
	queue<int> q;
	q.push(0);
	parent[0]=-1;
	int idx=1;
	while(!q.empty()) {
		int cur=q.front(); q.pop();
		set<int> children=adj[cur];
		children.erase(parent[cur]);
		while(!children.empty()) {
			int nxt=v[idx++];
			if(children.find(nxt)==children.end()) {
				cout << "No" << endl;
				return 0;
			} else children.erase(nxt);
			parent[nxt]=cur;
			q.push(nxt);
		}
	}
	cout << "Yes" << endl;
	return 0;
}
