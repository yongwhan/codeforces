#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,L; cin>>n>>L;
	vector<ll> c(n);
	for (int i=0; i<n; i++)
		cin>>c[i];
	for (int i=1; i<n; i++) {
		ll mn=2e9;
		for (int j=0; j<=i; j++)
			mn=min(mn,c[j]*(1<<(i-j)));
		c[i]=mn;
	}

	set<ll> cand;
	ll cur=L;
	for (int i=0; i<30; i++) {
		ll div=1LL<<i;
		cur=(cur+div-1)/div * div;
		cand.insert(cur);
	}

	ll ret=-1;
	for (auto j : cand) {
		ll val=0, tmp=j;
		for (int i=n-1; i>=0; i--) {
			ll div=1LL<<i, cur=tmp/div;
			tmp%=div; val+=cur*c[i];
		}
		if(ret==-1) ret=val;
		else ret=min(ret,val);
	}
	cout << ret << endl;
	return 0;
}
