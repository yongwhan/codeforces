#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

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

// a^-1 %m, any m
ll inv(ll a, ll m) {
	return exp(a, phi(m)-1, m);
}

// a^-1 %m, prime m
ll invp(ll a, ll m) {
	return exp(a, m-2, m);
}

// (a*b)%m
ll mul(ll a, ll b, ll m) {
	ll x=0, y=a%m;
	while(b>0) {
		if(b%2) x=(x+y)%m;
		y=(y*2)%m;
		b/=2;
	}
  return x%mod;
}

const int mx=1e6+5;

ll fact[mx];

ll combi(int n, int x, ll m) {
	ll p=fact[n], q=fact[x], r=fact[n-x];
	ll ret=p;
	ret=(ret*invp(q,m))%m;
	ret=(ret*invp(r,m))%m;
	return ret;
}

int main() {
	fact[0]=1;
	int n,m,k; cin>>n>>m>>k;
	for (int i=1; i<=n; i++)
		fact[i]=fact[i-1]*i%mod;
	cout << mul(mul(combi(n-1,k,mod),m,mod),exp(m-1,k,mod),mod) << endl;
	return 0;
}
