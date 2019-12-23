#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,k,s; cin>>n>>k>>s;
	ll val=1, sgn=1;
	vector<ll> ret(k);
	for (ll i=0; i<k; i++) {
		ll cur=(s+k-1-i)/(k-i);
		if(!cur) {
			cout << "NO" << endl;
			return 0;
		}
		ll mx=0;
		if(sgn==1) mx=n-val;
		else mx=val-1;
		if(cur>mx) {
			cout << "NO" << endl;
			return 0;
		}
		val+=sgn*cur;
		ret[i]=val;
		s-=cur;
		sgn=-sgn;
	}
	cout << "YES" << endl;
	for (auto it : ret)
		cout << it << " ";
	cout << endl;
	return 0;
}
