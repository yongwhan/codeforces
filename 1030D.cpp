#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

ll gcd(ll a, ll b) {
	if(!b) return a;
	return gcd(b,a%b);
}

bool ok(ll a, ll d, ll m) {
	if(a%d)
		return false;
	return (a/d)<=m;
}

void print(ll d, ll e) {
	cout << "YES" << endl;
	cout << "0 0" << endl;
	cout << d << " " << 0 << endl;
	cout << 0 << " " << e << endl;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,m,k; cin>>n>>m>>k;
	ll a=n*m;
	ll g=gcd(a,k);
	a/=g; k/=g;
	if(k>2) {
		cout << "NO" << endl;
		return 0;
	}
	if(k==1)
		a*=2;

	for (ll d=1; d*d<=n; d++) {
		if(n%d==0) {
			ll e=n/d;
			if(ok(a,d,m)) {
				print(d,a/d);
				return 0;
			}
			if(ok(a,e,m)) {
				print(e,a/e);
				return 0;
			}
		}
	}

	for (ll e=1; e*e<=m; e++) {
		if(m%e==0) {
			ll d=m/e;
			if(ok(a,e,n)) {
				print(a/e,e);
				return 0;
			}
			if(ok(a,d,n)) {
				print(a/d,d);
				return 0;
			}
		}
	}

	cout << "NO" << endl;
	return 0;
}
