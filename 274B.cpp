#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=1e5+77;
vector<vector<int>> adj(mx);
vector<ll> pos(mx,0), neg(mx,0), v(mx,0), ret(mx,0);

void eval(int cur, int par) {
	bool leaf=true;
	ll p=0, n=0;
	for (auto nxt : adj[cur]) {
		if(nxt!=par) {
			leaf=false;
			eval(nxt,cur);
			p=max(p,pos[nxt]);
			n=max(n,neg[nxt]);
		}
	}
	if(leaf) {
		ll val=v[cur];
		if(val>=0) pos[cur]=val, neg[cur]=0, ret[cur]=val;
		else pos[cur]=0, neg[cur]=-val, ret[cur]=-val;
	} else {
		ll val=v[cur]-(p-n);
		if(val>=0) pos[cur]=val+p, neg[cur]=n, ret[cur]=p+n+val;
		else pos[cur]=p, neg[cur]=-val+n, ret[cur]=p+n-val;
	}
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a,b; cin>>n;
	for (int i=0; i<n-1; i++) {
		cin>>a>>b; a--; b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for (int i=0; i<n; i++) cin>>v[i];
	eval(0,-1);
	cout << ret[0] << endl;
	return 0;
}
