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

int main() {
	ll m,n=1,p,t=1; cin>>m;
	map<ll,ll> ct;
	for (int i=0; i<m; i++) cin>>p, n=(n*p)%mod, ct[p]++;
	bool even=false;
	for (auto e : ct) {
		int cur=e.second+1;
		if(cur%2==0&&!even) cur/=2, even=true;
		t=(t*cur)%(mod-1);
	}
	if(!even) {
		n=1;
		for (auto e : ct) for (int i=0; i<e.second/2; i++) n=(n*e.first)%mod;
	}
	cout << exp(n,t,mod) << endl;
	return 0;
}
