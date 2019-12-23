#include<bits/stdc++.h>
using namespace std;

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

int main() {
	int n,a,b; cin>>n>>a>>b;
	vector<int> p(n), ind(n,0), ret(n,3);
	map<int,int> idx;
	for (int i=0; i<n; i++) cin>>p[i], idx[p[i]]=i;
	init(n+1);
	for (int i=0; i<n; i++) {
		int x=p[i];
		if(idx.count(a-x)) unite(idx[x],idx[a-x]), ind[i]|=1;
		if(idx.count(b-x)) unite(idx[x],idx[b-x]), ind[i]|=2;
	}
	for (int i=0; i<n; i++) ret[find(i)]&=ind[i];
	for (int i=0; i<n; i++) if(!ret[i]) {
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	for (int i=0; i<n; i++) {
		if(i) cout << " ";
		if(ret[find(i)]&1) cout << 0;
		else cout << 1;
	}
	cout << endl;
	return 0;
}
