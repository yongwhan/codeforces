#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	vector<string> grid(n);
	for (int i=0; i<n; i++) cin>>grid[i];
	for (int i=0; i<n; i++) for (int j=0; j<m; j++)
		if(grid[i][j]=='.') {
				grid[i][j]='D';
		}

	for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
		if(grid[i][j]=='S') {
			for (int ii=-1; ii<=1; ii++) for (int jj=-1; jj<=1; jj++)
				if(abs(ii)+abs(jj)==1) {
					int x=i+ii, y=j+jj;
					if(0<=x&&x<n&&0<=y&&y<m) {
						if(grid[x][y]=='W') {
							cout << "No" << endl;
							return 0;
						}
					}
				}
		}
	}
	cout << "Yes" << endl;
	for (auto it : grid)
		cout << it << endl;
	return 0;
}
