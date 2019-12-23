#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> ii;

ll eval(ll x, ll t) {
	ll ret=0;
	while(1) {
		if(x%t) break;
		x/=t, ret++;
	}
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,a; cin>>n;
	map<ii,vector<ll>> mp;
	for (int i=0; i<n; i++) {
		cin>>a;
		mp[{-eval(a,3),eval(a,2)}].push_back(a);
	}
	for (auto it : mp)
		for (auto it2 : it.second)
			cout << it2 << " ";
	cout << endl;
	return 0;
}
