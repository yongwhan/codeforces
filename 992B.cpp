#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if(!b) return a;
	else return gcd(b, a%b);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int l,r,x,y; cin>>l>>r>>x>>y;
	if(y%x) {
		cout << 0 << endl; return 0;
	}

	int ret=0, q=y/x;
	for (int d=1; d*d<=q; d++) {
		if(q%d==0) {
			int e=q/d;
			if(gcd(d,e)==1) {
				int u=d*x, v=e*x;
				if(l<=min(u,v)&&max(u,v)<=r) {
					if(u!=v) ret+=2;
					else ret++;
				}
			}
		}
	}
	cout << ret << endl;
	return 0;
}
