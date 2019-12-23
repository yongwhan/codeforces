#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,k,h; cin>>n>>k;
	map<ll,ll> ct;
	ll hmin=2e9, hmax=0;
	for (int i=0; i<n; i++) {
		cin>>h, ct[h]++;
		hmin=min(hmin,h);
		hmax=max(hmax,h);
	}
	ll cur=0;
	for (int x=hmax; x>=0; x--)
		cur+=ct[x], ct[x]=cur;
	ll ret=0, cum=0;
	for (ll x=hmax; x>hmin; x--)
		if(cum+ct[x]<=k) cum+=ct[x];
		else cum=ct[x], ret++;
	if(cum) ret++;
	cout << ret << endl;
	return 0;
}
