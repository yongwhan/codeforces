#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mx=2e5+777;
int par[mx][2];
ll sz[mx][2];

int find(int x,int k) {
	return !par[x][k] ? x : par[x][k]=find(par[x][k],k);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	for (int i=1; i<=n-1; i++) {
		int a,b,c;
		cin>>a>>b>>c;
		int x=find(a,c), y=find(b,c);
		if(x!=y)
			par[x][c]=y;
	}
	for (int i=1; i<=n; i++)
		for (int j=0; j<2; j++)
			sz[find(i,j)][j]++;
	ll ret=0;
	for (int i=1; i<=n; i++)
		ret+=sz[find(i,0)][0]*sz[find(i,1)][1]-1;
	cout<<ret<<endl;
	return 0;
}
