#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mod=1e9+7;

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

ll mul(ll x, ll y, ll m) {
	return (x*y)%m;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,q; cin>>n>>q;
	string s; cin>>s;
	vector<int> pre(n+1,0);
	for (int i=0; i<n; i++)
		pre[i+1]=pre[i]+(s[i]-'0');
	while(q--) {
		int l,r; cin>>l>>r;
		int one=pre[r]-pre[l-1], zero=r-l+1-one;
		ll ret=exp(2,one,mod);
		ret=(ret+mod-1)%mod;
		ret=mul(ret,exp(2,zero,mod),mod);
		cout << ret << endl;
	}
	return 0;
}
