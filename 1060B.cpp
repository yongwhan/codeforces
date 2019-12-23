#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int eval(ll x) {
	int ret=0;
	while(x)
		ret+=x%10, x/=10;
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n; cin>>n;
	ll a=0, mul=9;
	for (int i=0; i<15; i++) {
		ll b=a+mul;
		if(b>n) break;
		a+=mul, mul*=10;
	}
	cout << eval(a)+eval(n-a) << endl;
	return 0;
}
