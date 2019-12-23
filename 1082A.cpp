#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int inf=2e9+77;

int dist(int x, int y, int d) {
	return (abs(x-y)+d-1)/d;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int n,x,y,d, ret=inf; cin>>n>>x>>y>>d;
		if(abs(x-y)%d==0)
			ret=min(ret, dist(x,y,d));
		if((y-1)%d==0)
			ret=min(ret, dist(x,1,d)+dist(1,y,d));
		if((n-y)%d==0)
			ret=min(ret, dist(x,n,d)+dist(n,y,d));
		cout << (ret==inf ? -1 : ret) << endl;
	}
	return 0;
}
