#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	int m; cin>>m;
	vector<int> b(m);
	for (int i=0; i<m; i++) cin>>b[i];

	int ret=0, i=0, j=0;
	ll x=0, y=0;
	while(1) {
		if(i>=n||j>=m) break;
		x=0; y=0;
		x+=a[i++];
		y+=b[j++];
		while(x!=y) {
			if(x>y) {
				if(j>=m) break;
				y+=b[j++];
			}
			else if(x<y) {
				if(i>=n) break;
				x+=a[i++];
			}
			if(x==y) break;
		}
		ret++;
	}
	cout << ((x==y&&i==n&&j==m) ? ret : -1) << endl;
	return 0;
}
