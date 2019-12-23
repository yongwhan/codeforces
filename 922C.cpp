#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mx=42;

ll gcd(ll a, ll b) {
	if(!b) return a;
	return gcd(b,a%b);
}

ll lcm(ll a, ll b) {
	return a/gcd(a,b) * b;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,k; cin>>n>>k;
	if(k>mx) { cout << "No" << endl; return 0; }
	map<ll,ll> l;
	l[0]=1;
	for (ll i=1; i<=mx; i++) l[i]=lcm(l[i-1],i);
	ll cur=n+1;
	cout << ((cur%l[k]==0) ? "Yes" : "No") << endl;
	return 0;
}
