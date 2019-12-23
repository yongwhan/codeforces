#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int n,m;
vector<int> g[100100];
ll a[100100];
pair<ll,int> aa[100100];

ll res=0;

int par[100100], sz[100100];
bool seen[100100];

inline int root(int v) {
	return v==par[v] ? v:par[v]=root(par[v]);
}

inline void join(int v, int w, ll wt) {
	v=root(v), w=root(w);
	if(v==w) return;
	if(sz[v]>sz[w]) swap(v,w);
	res+=wt*sz[v]*sz[w];
	par[v]=w;
	sz[w]+=sz[v];
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	cin>>n>>m;
	for (int v=1; v<=n; v++)
		cin>>a[v], par[v]=v, sz[v]=1, aa[v]={a[v],v};
	for (int i=0; i<m; i++) {
		int x,y; cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}

	sort(aa+1, aa+n+1, greater<pair<ll,int>>());
	for (int i=1; i<=n; i++) {
		int v=aa[i].second;
		for (int w : g[v]) {
			if(!seen[w]) continue;
			join(v,w,aa[i].first);
		}
		seen[v]=1;
	}
	cout << setprecision(10) << fixed << 2.*res/(ll(n)*(n-1)) << endl;
	return 0;
}
