#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
	if(!b) return a;
	return gcd(b,a%b);
}

ll lcm(ll a, ll b) {
	return a/gcd(a,b)*b;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll a,b; cin>>a>>b;
	ll x=abs(a-b);
	if(!x) {
		cout << 0 << endl;
		return 0;
	}

	set<ll> st;
	for (ll d=1; d*d<=x; d++)
		if(x%d==0) st.insert(d), st.insert(x/d);
	map<ll, set<ll>> mp;
	for (auto d : st) {
		ll k=((a+d-1)/d)*d-a;
		mp[lcm(a+k,b+k)].insert(k);
	}
	cout << (*((*mp.begin()).second).begin()) << endl;
	return 0;
}
