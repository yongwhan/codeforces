#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	vector<string> grid(n);
	vector<vector<bool>> forbidden(n, vector<bool>(m,false));
	for (int i=0; i<n; i++) cin>>grid[i];
	for (int i=0; i<n; i++)
		forbidden[i][0]=forbidden[i][m-1]=true;
	for (int j=0; j<m; j++)
		forbidden[0][j]=forbidden[n-1][j]=true;
	for (int i=0; i<n; i++) for (int j=0; j<m; j++) if(grid[i][j]=='.')
		for (int ii=-1; ii<=1; ii++) for (int jj=-1; jj<=1; jj++) {
			if(ii||jj) {
				int iii=i+ii, jjj=j+jj;
				if(0<=iii&&iii<n&&0<=jjj&&jjj<m)
					forbidden[iii][jjj]=true;
			}
		}

	for (int i=0; i<n; i++) for (int j=0; j<m; j++) if(grid[i][j]=='#') {
		int ct=0;
		for (int ii=-1; ii<=1; ii++) for (int jj=-1; jj<=1; jj++) {
			if(ii||jj) {
				int iii=i+ii, jjj=j+jj;
				if(0<=iii&&iii<n&&0<=jjj&&jjj<m)
					ct+=int(!forbidden[iii][jjj]);
			}
		}
		if(!ct) { cout << "NO" << endl; return 0; }
	}
	cout << "YES" << endl;
	return 0;
}
