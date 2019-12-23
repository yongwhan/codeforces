#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll t; cin>>t;
	while(t--) {
		ll k; cin>>k;
		vector<ll> a(7);
		ll tot=0;
		for (ll i=0; i<7; i++) cin>>a[i], tot+=a[i];

		ll q=k/tot, r=k%tot;
		if(!r) r+=tot, q--;

		ll add=8;
		for (ll i=0; i<7; i++) {
			ll cur=0, j=i;
			while(cur<r) {
				cur+=a[j%7],
				j++;
			}			
			add=min(add,j-i);
		}
		cout << q*7 + add << endl;
	}
	return 0;
}
