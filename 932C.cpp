#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,a,b; cin>>n>>a>>b;
	ll x=-1, y;
	for (int i=0; i<=n; i++) {
		ll r=n-a*i;
		if(r>=0&&r%b==0) {
			x=i; y=r/b; break;
		}
	}
	if(x==-1) {
		cout << -1 << endl;
		return 0;
	}
	ll init=1;
	for (int i=0; i<x; i++) {
		for (int j=0; j<a; j++) {
			cout << init+(1+j)%a << " ";
		}
		init+=a;
	}

	for (int i=0; i<y; i++) {
		for (int j=0; j<b; j++) {
			cout << init+(1+j)%b << " ";
		}
		init+=b;
	}
	cout << endl;
	return 0;
}
