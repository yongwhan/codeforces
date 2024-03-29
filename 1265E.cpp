#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mod=998244353;

int phi(int n) {
	int result=n;
	for (int i=2; i*i<=n; i++) {
		if(n%i==0) result-=result/i;
		while(n%i==0) n/=i;
	}
	if(n>1) result-=result/n;
	return result;
}

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
  return x%m;
}

// (a+b)%m
ll add(ll a, ll b, ll m) {
	return (a+b)%m;
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

bool isprime(int n) {
	if(n==1) return false;
	for (int i=2; i*i<=n; i++)
		if(n%i==0) return false;
	return true;
}

int gcd(int a, int b) {
	if(!b) return a;
	else return gcd(b,a%b);
}

int main() {
	int n; cin>>n;
	ll ret=0,p;
	for (int i=0; i<n; i++) {
		cin>>p;
		ll cur=mul(100,invp(p,mod),mod);
		ret=mul(ret,cur,mod);
		ret=add(ret,cur,mod);
	}
	cout<<ret<<"\n";
	return 0;
}
