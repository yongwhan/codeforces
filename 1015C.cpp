#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,m,a,b; cin>>n>>m;
	vector<ll> v(n);
	ll total=0;
	for (int i=0; i<n; i++) cin>>a>>b, v[i]=a-b, total+=a;
	total-=m;
	sort(v.begin(),v.end(),greater<ll>());
	int ret=0;
	for (int i=0; i<n; i++) {
		if(total>0) total-=v[i], ret++;
	}
	if(total<=0) cout << ret << endl;
	else cout << -1 << endl;
	return 0;
}
