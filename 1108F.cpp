#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

const int mx=1e6+5;

int par[mx], rnk[mx];

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

int main() {
	int n,m; scanf("%d %d", &n, &m);
	init(n+1);
	map<int,vector<ii>> edge;
	for (int i=0; i<m; i++) {
		int u,v,w; scanf("%d %d %d", &u, &v, &w);
		u--; v--;
		edge[w].push_back({u,v});
	}

	int ret=0;
	vector<ii> cur;
	for (auto &it : edge) {
		cur.clear();
		for (auto &x : it.second)
			if(!same(x.first,x.second))
				cur.push_back(x);
		for (auto &x : cur)
			if(!same(x.first,x.second)) unite(x.first, x.second);
			else ret++;
	}
	printf("%d\n", ret);
	return 0;
}
