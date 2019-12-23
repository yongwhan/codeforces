#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=177;
int a[mx][mx];

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	int xc=(k+1)/2, yc=(k+1)/2;
	for (int i=1; i<=n; i++) {
		int m;
		cin>>m;
		int best=-1, x=-1, y1=-1;
		for (int j=1; j<=k; j++)
			for (int l=1; l<=k-m+1; l++) {
				int cur=0;
				bool ok=true;
				for (int p=l; p<l+m; p++) {
					if(a[j][p]) {
						ok=false;
						break;
					}
					cur+=abs(j-xc)+abs(p-yc);
				}
				if(ok&&(best==-1||cur<best))
					x=j, y1=l, best=cur;
			}
			if(best==-1) cout << best << endl;
			else {
				cout << x << " " << y1 << " " << y1+(m-1) << endl;
				for (int j=y1; j<y1+m; j++)
					a[x][j]=1;
			}
	}
	return 0;
}
