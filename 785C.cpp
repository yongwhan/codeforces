#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,m; cin>>n>>m;
	if(m>=n) {
		cout << n << endl;
		return 0;
	}
	ll ret=m, low=0, high=2e9, mid;
	for (int i=0; i<100; i++) {
		mid=(low+high)/2;
		if((1+mid)*mid/2>=n-m) high=mid;
		else low=mid+1;
	}
	ret+=mid;
	cout << ret << endl;
	return 0;
}
