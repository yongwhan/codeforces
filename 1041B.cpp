#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

ll gcd(ll a, ll b) {
	if(!b) return a;
	return gcd(b,a%b);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll a,b,x,y; cin>>a>>b>>x>>y;
	ll g=gcd(x,y);
	x/=g; y/=g;
	cout << min(a/x, b/y) << endl;
	return 0;
}
