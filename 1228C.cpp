#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mod=1e9+7;

int phi(int n) {
	int result=n;
	for (int i=2; i*i<=n; i++) {
		if(n%i==0) result-=result/i;
		while(n%i==0) n/=i;
	}
	if(n>1) result-=result/n;
	return result;
}

ll exp(ll a, ll b, ll m) {
	ll r=1;
	while(b) {
		if(b%2) r=(r*a)%m;
		a=(a*a)%m;
		b/=2;
	}
	return r;
}

ll eval(ll n, ll p, ll period) {
	ll ret=0;
	while(n)
		ret=(ret+n/p)%period, n/=p;
	return ret;
}

int main() {
	ll ret=1,x,n; cin>>x>>n;
	ll y=x;
	vector<ll> ps;
	for (int u=2; u*u<=y; u++) {
		if(y%u) continue;
		while(y%u==0)
			y/=u;
		ps.push_back(u);
	}
	if(y>1) ps.push_back(y);
	ll period=phi(mod);
	for (const ll &p : ps)
		ret=(ret*exp(p,eval(n,p,period),mod))%mod;
	cout<<ret<<endl;
	return 0;
}
