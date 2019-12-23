#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n; cin>>n;
	ll g=n;
	for (ll d=1; d*d<=n; d++) {
		if(n%d) continue;
		ll e=n/d;
		if(d!=1&&d!=n) g=__gcd(g,d);
		if(e!=1&&e!=n) g=__gcd(g,e);
	}
	cout<<g<<"\n";
	return 0;
}
