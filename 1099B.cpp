#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n; cin>>n;
	ll ret=2e9;
	for (ll d=1; d*d<=n; d++)
		ret=min(ret,d+(n+d-1)/d);
	cout << ret << endl;
	return 0;
}
