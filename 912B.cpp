#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,k; cin>>n>>k;
	if(k==1) {
		cout << n << endl;
		return 0;
	}
	ll idx=-1;
	for (ll i=60; i>=0; i--) {
		if(n&(1LL<<i)) {
			idx=i;
			break;
		}
	}
	cout << max(n,(1LL<<(idx+1))-1) << endl;
	return 0;
}
