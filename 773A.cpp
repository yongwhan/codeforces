#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll eval(ll x, ll y, ll p, ll q) {
	if(!p) return !x ? 0:-1;
	if(p==q) return x==y ? 0:-1;
	return q*max((x+p-1)/p,((y-x)+(q-p)-1)/(q-p))-y;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		ll x,y,p,q; cin>>x>>y>>p>>q;
		cout << eval(x,y,p,q) << endl;
	}
	return 0;
}
