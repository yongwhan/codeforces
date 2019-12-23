#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,k; cin>>n>>k;
	ll lim=2*n/k/(k+1);
	ll g=-1;
	for (ll d=1; d*d<=n; d++) {
		if(n%d==0) {
			ll e=n/d;
			if(d<=lim) g=max(g,d);
			if(e<=lim) g=max(g,e);
		}
	}
	if(g==-1) {
		cout << -1 << endl; return 0;
	}

	for (ll i=1; i<k; i++)
		cout << g*i << " ", n-=g*i;
	cout << n << endl;
	return 0;
}
