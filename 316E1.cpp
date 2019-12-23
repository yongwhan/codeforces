#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=107;
const int mod=1000000000;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<ll> f(mx);
	f[0]=1; f[1]=1;
	for (int i=2; i<mx; i++)
		f[i]=(f[i-1]+f[i-2])%mod;
	ll n,m; cin>>n>>m;
	vector<ll> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	for (int c=0; c<m; c++) {
		int t; cin>>t;
		if(t==1) {
			int x,v;
			cin>>x>>v; x--; a[x]=v;
		} else {
			int l,r; cin>>l>>r; l--; r--;
			ll ret=0;
			for (int i=l; i<=r; i++)
				ret=(ret+(f[i-l]*a[i])%mod)%mod;
			cout << ret << endl;
		}
	}
	return 0;
}
