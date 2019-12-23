#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod=998244353, mx=1e6+777;
vector<ll> fact(mx), inv_fact(mx);

ll phi(ll n) {
	ll result=n;
	for (ll i=2; i*i<=n; i++) {
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

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n; cin>>n;
	ll e=phi(mod)-1, ret=1;
	fact[0]=1; inv_fact[0]=1;
	for (ll i=1; i<mx; i++)
		fact[i]=(i*fact[i-1])%mod,
		inv_fact[i]=(exp(i,e,mod)*inv_fact[i-1])%mod;
	for (ll i=1; i<=n; i++)
		ret+=(i*((fact[n]*inv_fact[n-i])%mod+(mod-(fact[n]*inv_fact[n-i+1])%mod)))%mod;
	cout << ret%mod << endl;
	return 0;
}
