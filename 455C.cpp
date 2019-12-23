#include<bits/stdc++.h>
using namespace std;

const int mx=3e5+77;
vector<vector<int>> adj(mx);
int par[mx], rnk[mx], diam[mx], dist[2][mx], n;

void init(int n) {
	for (int i=0; i<n; i++)
		par[i]=i, rnk[i]=0;
}

int find(int x) {
	if(par[x]==x) return x;
	else return par[x]=find(par[x]);
}

void unite(int x, int y) {
	x=find(x);
	y=find(y);
	if(x==y) return;
	if(rnk[x]<rnk[y]) par[x]=y;
	else {
		par[y]=x;
		if(rnk[x]==rnk[y]) rnk[x]++;
	}
}

bool same(int x, int y) {
	return find(x)==find(y);
}

int bfs(int init, int iter) {
	queue<int> que; que.push(init); dist[iter][init]=0;
	int last=-1;
	while(!que.empty()) {
		int cur=que.front(); que.pop();
		last=cur;
		if(iter==1) unite(init,cur), diam[cur]=diam[init]=diam[find(cur)]=dist[iter][cur];
		for (int nxt : adj[cur]) {
			if(dist[iter][nxt]==-1) dist[iter][nxt]=dist[iter][cur]+1, que.push(nxt);
		}
	}
	return last;
}

void compute(int init) {
	int x=bfs(init,0);
	bfs(x,1);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int m,q,a,b,t,x,y,u,v; cin>>n>>m>>q;
	for (int i=0; i<m; i++) {
		cin>>a>>b; a--; b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	init(n+1);
	for (int i=0; i<2; i++) for (int j=0; j<n; j++) dist[i][j]=-1;
	for (int i=0; i<n; i++) if(!diam[i]) compute(i);
	while(q--) {
		cin>>t;
		if(t==1) cin>>x, cout << diam[find(x-1)] << endl;
		else {
			cin>>x>>y; x--; y--;
			if(!same(x,y)) {
				u=diam[find(x)], v=diam[find(y)];
				unite(x,y), diam[find(x)]=max({u,v,(u+1)/2+(v+1)/2+1});
			}
		}
	}
	return 0;
}
