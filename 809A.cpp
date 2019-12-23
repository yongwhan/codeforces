#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mod=1e9+7;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n; cin>>n;
	vector<ll> x(n), pre(n,0), suf(n,0);
	for (int i=0; i<n; i++) cin>>x[i];
	sort(x.begin(), x.end());
	pre[0]=x[0], suf[0]=x[n-1];
	for (int i=1; i<n; i++) pre[i]=(pre[i-1]+x[i])%mod, suf[i]=(suf[i-1]+x[n-1-i])%mod;
	ll mul=1, ret=0;
	for (int i=0; i<n; i++) ret=(ret+(((suf[i]+(mod-pre[i]))%mod)*mul)%mod)%mod, mul=(mul*2)%mod;
	cout << ret << endl;
	return 0;
}
