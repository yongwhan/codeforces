#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll ds(ll x) {
	ll ret=0;
	while(x) ret+=x%10, x/=10;
	return ret;
}

bool good(ll a, ll s) {
	return a-ds(a)>=s;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,s; cin>>n>>s;
	ll t=min(s+500,n), ret=n-t;
	for (ll i=s; i<=t; i++) if(good(i,s)) ret++;
	cout << ret << endl;
	return 0;
}
