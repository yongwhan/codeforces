#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,m,ret=0; cin>>n>>m;
	ll l=(n-1)/2, ubd=n*(n-1)/2, lbd=l*(l+1);
	if(n%2==0) lbd+=n/2;

	for (int i=0; i<m; i++) {
		ll x,d; cin>>x>>d;
		ret+=x*n;
		if(d>0) ret+=d*ubd;
		else if(d<0) ret+=d*lbd;
	}
	cout << setprecision(10) << fixed << double(ret)/n << endl;
	return 0;
}
