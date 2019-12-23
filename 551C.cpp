#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mx=1e5+77;
ll n,m,tot,last,a[mx];

bool check(ll x) {
	int cur=m;
	ll val=0;
	for (int i=1; i<=last; i++) {
		val+=a[i];
		while(val>=x-i) {
			val-=x-i;
			cur--;
			if(cur<0) return false;
		}
	}
	if(!cur) return val<=0;
	return true;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	cin>>n>>m;
	tot=0;
	for (int i=1; i<=n; i++) {
		cin>>a[i];
		tot+=a[i];
		if(a[i]) last=i;
	}
	ll low=last+1, high=tot+last;
	while(low<=high) {
		ll mid=(low+high)/2;
		if(check(mid)) high=mid-1;
		else low=mid+1;
	}
	cout << high+1 << endl;
	return 0;
}
