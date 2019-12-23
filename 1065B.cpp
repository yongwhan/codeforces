#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

ll eval(ll n, ll m) {
	for (ll i=0; i<1e6; i++)
		if(i*(i-1)/2>=m) return i;
	return -1;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,m; cin>>n>>m;
	cout << max(0LL,n-2*m);
	ll t=eval(n,m);
	ll ret=n-t;
	if(m>t*(t-1)/2) ret++;
	cout << " " << ret << endl;
	return 0;
}
