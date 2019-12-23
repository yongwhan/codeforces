#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mod=998244353;


// (a^b)%m
ll exp(ll a, ll b, ll m) {
	ll r=1;
	while(b) {
		if(b%2) r=(r*a)%m;
		a=(a*a)%m;
		b/=2;
	}
	return r;
}

int sum(int x, int y) {
	return (x+y)%mod;
}

ll mul(ll x, ll y) {
	return (x*y)%mod;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int n,m; cin>>n>>m;
		map<int,vector<int>> adj;
		map<int,int> col;
		for (int i=0; i<m; i++) {
			int u,v; cin>>u>>v; u--; v--;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}


		ll ret=1;
		for (int i=0; i<n; i++) {
			if(col.find(i)==col.end()) {
				queue<int> q; q.push(i); col[i]=0;
				int ct=0, sz=0;
				while(!q.empty()) {
					int cur=q.front(); q.pop();
					ct+=col[cur];
					sz++;
					for (auto nxt : adj[cur]) {
						if(col.find(nxt)==col.end()) {
							col[nxt]=1-col[cur];
							q.push(nxt);
						} else {
							if(col[cur]+col[nxt]!=1) {
								ret=-1;
								break;
							}
						}
					}
					if(ret==-1)
						break;
				}
				if(ret==-1)
					break;
				ret=mul(ret, sum(exp(2,ct,mod),exp(2,sz-ct,mod)));
			}
		}
		cout << (ret==-1 ? 0 : ret) << endl;
	}
	return 0;
}
