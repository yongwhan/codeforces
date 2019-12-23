#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int n,m; cin>>n>>m;
	vector<ll> b(n), g(m);
	ll ret=0;
	for (int i=0; i<n; i++) cin>>b[i], ret+=b[i]*m;
	for (int i=0; i<m; i++) cin>>g[i], ret+=g[i];
	sort(b.rbegin(), b.rend());
	sort(g.begin(), g.end());
	if(b.front()>g.front()) {
		cout << -1 << endl;
		return 0;
	}
	ret-=b[0]*(m-1);
	if(b[0]==g[0]) ret-=b[0];
	else ret-=b[1];
	cout << ret << endl;
	return 0;
}
