#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n, xmax=0, ymax=0; cin>>n;
	while(n--) {
		char op; cin>>op;
		if(op=='+') {
			int x,y; cin>>x>>y;
			if(x>y) swap(x,y);
			xmax=max(xmax,x);
			ymax=max(ymax,y);
		} else {
			int h,w; cin>>h>>w;
			if(h>w) swap(h,w);
			cout << ((xmax<=h && ymax<=w) ? "YES" : "NO") << endl;
		}
	}
	return 0;
}
