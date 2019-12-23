#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,m,k; cin>>n>>m>>k;
	if(k<n) {
		cout << k+1 << " " << 1 << endl;
		return 0;
	}
	k-=n;
	ll r=k/(m-1);
	cout << n-r << " ";
	if(r&1) cout << m-k%(m-1) << endl;
	else cout << k%(m-1)+2 << endl;
	return 0;
}
