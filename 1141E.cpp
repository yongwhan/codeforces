#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll H; cin>>H;
	int n; cin>>n;
	vector<ll> d(n), pre(n,0);
	for (int i=0; i<n; i++) {
		cin>>d[i];
		if(!i) pre[i]=d[i];
		else pre[i]=pre[i-1]+d[i];
		if(pre[i]+H<=0) {
			cout << i+1 << endl;
			return 0;
		}
	}

	if(pre[n-1]>=0) {
		cout << -1 << endl;
		return 0;
	}

	ll ret=1e18;
	for (int i=0; i<n; i++) {
		ll cur=(((H+pre[i])+(-pre[n-1]-1))/(-pre[n-1]))*n+i+1;
		ret=min(ret,cur);
	}
	cout << ret << endl;
	return 0;
}
