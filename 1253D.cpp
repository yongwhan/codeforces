#include<bits/stdc++.h>
using namespace std;

const int mx=2e5+777;

int par[mx], rnk[mx], val[mx];

void init(int n) {
	for (int i=0; i<n; i++)
		par[i]=i, rnk[i]=0, val[i]=i;
}

int find(int x) {
	if(par[x]==x) return x;
	else return par[x]=find(par[x]);
}

void unite(int x, int y) {
	x=find(x);
	y=find(y);
	val[x]=max(val[x],val[y]);
	val[y]=max(val[x],val[y]);
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
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,u,v; scanf("%d %d",&n,&m);
	init(n+1);
	for (int i=0; i<m; i++)
		scanf("%d %d",&u,&v), unite(u,v);
	int ret=0, i=1, up=val[find(i)];
	while(i<=n) {
		for (int j=i+1; j<val[find(i)]; j++)
			if(!same(i,j))
				unite(i,j), ret++;
		i=val[find(i)]+1;
	}
	printf("%d\n",ret);
	return 0;
}
