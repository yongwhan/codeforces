#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll eval(ll G, ll L) {
	return L + L*(L-1)/2 * G;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n; cin>>n;
	set<ll> ret;
	for (ll d=1; d*d<=n; d++) {
		if(n%d==0) {
			ll e=n/d;
			ret.insert(eval(d,e));
			if(e!=d) ret.insert(eval(e,d));
		}
	}

	for (auto it : ret)
		cout << it << " ";
	cout << endl;
	return 0;
}
