#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,q,x,y; cin>>n>>q;
	while(q--) {
		cin>>x>>y; x--; y--;
		ll ret=0;
		ll l=(n+1)/2;
		ll t=x/2, r=x%2;
		if((x+y)%2) {
			ret+=(n*n+1)/2-1,
			l=n-l,
			y+=2;
		}

		ret+=t*n;
		if(r) ret+=l;
		ret+=y/2;
		cout << ret+1 << endl;
	}
	return 0;
}
