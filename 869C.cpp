#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod=998244353, mx=5050;
ll binom[mx][mx], fact[mx];

ll mul(ll x, ll y) {
	return (x*y)%mod;
}

ll add(ll x, ll y) {
	return (x+y)%mod;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<ll> a(3);
	for (int i=0; i<3; i++)
		cin>>a[i];
	fact[0]=1;
	for (ll i=0; i<mx; i++) {
		if(i) fact[i]=mul(fact[i-1],i);
		binom[i][0]=binom[i][i]=1;
		for (ll j=1; j<i; j++)
			binom[i][j]=add(binom[i-1][j],binom[i-1][j-1]);
	}
	ll ret=1;
	for (int bt=0; bt<(1<<3); bt++) {
		vector<ll> b;
		for (int i=0; i<3; i++)
			if(bt&(1<<i))
				b.push_back(a[i]);
			if(b.size()==2) {
				ll cur=0;
				for (int k=0; k<=min(b[0],b[1]); k++)
					cur=add(cur,mul(fact[k],mul(binom[b[0]][k],binom[b[1]][k])));
				ret=mul(ret,cur);
			}
	}
	cout << ret << endl;
	return 0;
}
