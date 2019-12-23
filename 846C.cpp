#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=5077;
const ll inf=1LL<<40;

vector<ll> pre(mx,0);

// include x exclude y
ll eval(int x, int y) {
	return pre[y]-pre[x];
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<ll> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	for (int i=0; i<n; i++)
		pre[i+1]=pre[i]+a[i];

	ll x=-1, y=-1, z=-1, ret=-inf;
	for (int i=0; i<=n; i++) {
		ll xx=-1, zz=-1;
		ll LEFT=-inf, RIGHT=-inf;
		for (int j=0; j<=i; j++) {
			ll cur=-eval(j,i)+eval(0,j);
			if(LEFT<cur)
				LEFT=cur, xx=j;
		}
		for (int j=i; j<=n; j++) {
			ll cur=-eval(j,n)+eval(i,j);
			if(RIGHT<cur)
				RIGHT=cur, zz=j;
		}
		ll cur=LEFT+RIGHT;
		if(ret<cur)
			ret=cur, x=xx, y=i, z=zz;
		ret=max(ret,cur);
	}
	cout << x << " " << y << " " << z << endl;
	return 0;
}
