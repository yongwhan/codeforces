#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int gcd(int a, int b) {
	if(!b) return a;
	return gcd(b,a%b);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n), b(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	for (int i=0; i<n; i++)
		cin>>b[i];
	map<ii,int> ct;
	int zz=0;
	for (int i=0; i<n; i++) {
		int x=a[i], y=b[i], g=gcd(abs(x),abs(y));
		if(x==0) {
			if(y==0)
				zz++;
			continue;
		}
		x/=g;
		y/=g;
		if(x<0) x=-x, y=-y;

		if(!x) y=1;
		if(!y) x=1;

		ct[{x,y}]++;
	}
	int ret=0;
	for (auto it : ct)
		if(it.first.first)
			ret=max(ret,it.second);
	cout << zz+ret << endl;
	return 0;
}
