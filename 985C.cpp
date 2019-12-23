#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,k,l,m,s=0,c=0;
	cin>>n>>k>>l; m=n*k;
	vector<ll> a(m);
	for (int i=0; i<m; i++) cin>>a[i];
	sort(a.begin(),a.end(),greater<int>());
	for (int i=0; i<m; i++) {
		c++;
		if(a[i]-a[m-1]<=l && c>=k)
			s+=a[i], c-=k;
	}
	if(!c) cout << s << endl;
	else cout << 0 << endl;
	return 0;
}
