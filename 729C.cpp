#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,k,s,t; cin>>n>>k>>s>>t;
	vector<ll> c(n), v(n), g(k+1,1e9+5), f(k+2,0);
	for (int i=0; i<n; i++) cin>>c[i]>>v[i];
	for (int i=0; i<k; i++) cin>>g[i];
	sort(g.begin(),g.end());
	g[k]=s;
	for (int i=k-1; i>=0; i--) g[i+1]-=g[i];
	sort(g.begin(),g.end());
	for (int i=1; i<=k+1; i++) f[i]=f[i-1]+g[i-1];
	ll ret=-1;
	for (int i=0; i<n; i++) if(g[k]<=v[i]) {
		ll x=upper_bound(g.begin(),g.end(),v[i]/2)-g.begin();
		if(2*s-f[x]-(k+1-x)*v[i]+(f[k+1]-f[x])<=t) {
			if(ret==-1) ret=c[i];
			else ret=min(ret,c[i]);
		}
	}
	cout << ret << endl;
	return 0;
}
