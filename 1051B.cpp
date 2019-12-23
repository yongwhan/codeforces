#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll l,r; cin>>l>>r;
	cout << "YES" << endl;
	for (ll i=l; i<=r; i+=2)
		cout << i << " " << i+1 << endl;
	return 0;
}
