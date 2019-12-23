#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool prime(ll x) {
	int ret=0;
	for (ll d=1; d*d<=x; d++) {
		if(x%d==0) {
			ret++;
			ll e=x/d;
			if(e!=d) ret++;
		}
	}
	return ret==2;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		ll a,b; cin>>a>>b;
		if(a-b!=1) { cout << "NO" << endl; continue; }
		cout << (prime(2*b+1) ? "YES" : "NO") << endl;
	}
	return 0;
}
