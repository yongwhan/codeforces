#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int n; cin>>n;
	ll x,y, sx=0, sy=0, sqx=0, sqy=0;
	for (int i=0; i<n; i++) {
		cin>>x>>y;
		sx+=x;
		sy+=y;
		sqx+=x*x;
		sqy+=y*y;
	}
	cout << n*(sqx+sqy)-(sx*sx+sy*sy) << endl;
	return 0;
}
