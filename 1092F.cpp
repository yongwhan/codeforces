#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll cur,ret;

vector<ll> a,sum;
vector<vector<int>> adj;

void eval(int v, int p=-1, int h=0) {
	cur+=a[v]*h;
	sum[v]=a[v];

	for (auto u:adj[v]) {
		if (u==p)
			continue;
		eval(u,v,h+1);
		sum[v]+=sum[u];
	}
}

void eval2(int v, int p=-1) {
	ret=max(ret,cur);
	for (auto u:adj[v]) {
		if (u==p)
			continue;
		cur-=sum[u]; sum[v]-=sum[u]; cur+=sum[v]; sum[u]+=sum[v];
		eval2(u,v);
		sum[u]-=sum[v]; cur-=sum[v]; sum[v]+=sum[u]; cur+=sum[u];
	}
}

int main() {
	int n; cin>>n;
	a=vector<ll>(n);
	sum=vector<ll>(n);
	adj=vector<vector<int>>(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	for (int i=0; i<n-1; i++) {
		int x,y; cin>>x>>y; x--; y--;
		adj[x].push_back(y); adj[y].push_back(x);
	}
	eval(0);
	eval2(0);
	cout<<ret<<endl;
	return 0;
}
