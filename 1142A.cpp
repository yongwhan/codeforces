#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int sgn[]={-1, 1};

ll gcd(ll a, ll b) {
	if(!b) return a;
	else return gcd(b,a%b);
}

ll dist(ll a, ll x, ll m) {
	ll cur=abs(a-x);
	if(cur==0)
		return m;
	return cur;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,k,a,b; cin>>n>>k>>a>>b;
	ll m=n*k;
	set<ll> ret;
	for (ll i=0; i<n; i++) {
		ll city=i*k;
		for (int j=0; j<2; j++) {
			ll cur=(city+m+sgn[j]*b)%m;
			ll x=dist(a,cur,m);
			ret.insert(m/gcd(m,x));
		}
	}
	cout << *ret.begin() << " " << *ret.rbegin() << endl;
	return 0;
}
