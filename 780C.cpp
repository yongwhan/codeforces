#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int next(int x, set<int> &used) {
	while(1) {
		if(used.find(x)==used.end()) {
			used.insert(x);
			return x;
		}
		x++;
	}
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<vector<int> > adj(n);
	for (int i=0; i<n-1; i++) {
		int x,y; cin>>x>>y; x--; y--;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	queue<int> q; q.push(0);
	vector<int> color(n,0), parent(n,-1);
	int mx=0;
	color[0]=1;
	while(!q.empty()) {
		int cur=q.front(); q.pop();
		int par=parent[cur];

		set<int> used;
		used.insert(color[cur]);
		if(par!=-1) used.insert(color[par]);
		vector<int> nbr=adj[cur];
		int ct=1;
		for (int nxt : nbr) {
			if(!color[nxt]) {
				parent[nxt]=cur;
				ct=next(ct,used);
				color[nxt]=ct;
				q.push(nxt);
				mx=max(mx,ct);
			}
		}
	}

	cout << mx << endl;
	for (int x : color) cout << x << " ";
	cout << endl;
	return 0;
}
