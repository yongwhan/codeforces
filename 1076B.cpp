#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll eval(ll n) {
	for (ll d=2; d*d<=n; d++)
		if(n%d==0)
			return d;
	return n;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n, ret=0; cin>>n;
	if(n%2) n-=eval(n), ret++;
	ret+=n/2;
	cout << ret << endl;
	return 0;
}
