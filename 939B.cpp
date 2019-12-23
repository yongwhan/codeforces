#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,k,a; cin>>n>>k;
	map<ll,ii> ret;
	for (int i=0; i<k; i++) {
		cin>>a;
		ll x=n/a;
		ret[x * a]={i+1,x};
	}
	auto it=ret.rbegin();
	ii ans=it->second;
	cout << ans.first << " " << ans.second << endl;
	return 0;
}
