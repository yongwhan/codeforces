#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll mod=1e9+7;

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
	ll n,m; cin>>n>>m;
	cout<<exp((exp(2LL,m,mod)+(mod-1))%mod,n,mod)<<endl;
	return 0;
}
