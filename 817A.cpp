#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const ll inf=1e7;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll x1,y1,x2,y2,x,y; cin>>x1>>y1>>x2>>y2>>x>>y;
	for (ll i=-inf; i<=inf; i++) {
		int dx=abs(x2-(x1+x*i)), dy=abs(y2-(y1+y*i));
		if(dx%x==0&&dy%y==0&&dx*y==dy*x) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
