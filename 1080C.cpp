#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll w(ll a, ll b) {
	return ((a+1)/2)*((b+1)/2) + (a/2)*(b/2);
}

ll W(ll x1, ll y1, ll x2, ll y2) {
	return w(x2,y2)-w(x2,y1-1)-w(x1-1,y2)+w(x1-1,y1-1);
}

ll B(ll x1, ll y1, ll x2, ll y2) {
	return (x2-x1+1)*(y2-y1+1) - W(x1,y1,x2,y2);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int x1,x2,x3,x4,y1,y2,y3,y4;
		ll n,m; cin>>n>>m;
		cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
		ll white=W(1,1,m,n)+B(x1,y1,x2,y2)-W(x3,y3,x4,y4);
		if(max(x1,x3)<=min(x2,x4)&&max(y1,y3)<=min(y2,y4))
			white-=B(max(x1,x3),max(y1,y3),min(x2,x4),min(y2,y4));
		cout << white << " " << n*m-white << endl;
	}
	return 0;
}
