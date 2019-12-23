#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	vector<string> grid(n);
	int score[n][m];
	for (int i=0; i<n; i++) cin>>grid[i];
	for (int i=0; i<n; i++) for (int j=0; j<m; j++) score[i][j]=0;
	for (int i=0; i<n; i++) for (int j=0; j<m; j++) if(grid[i][j]=='*')
		for (int di=-1; di<=1; di++) for (int dj=-1; dj<=1; dj++)
			if(di||dj) {
				int ii=i+di, jj=j+dj;
				if(0<=ii&&ii<n && 0<=jj&&jj<m)
					if(grid[ii][jj]!='*') score[ii][jj]++;
			}

	for (int i=0; i<n; i++) for (int j=0; j<m; j++)
		if(grid[i][j]!='*') {
			if(grid[i][j]=='.') {
				if(score[i][j]) {
					cout << "NO" << endl; return 0;
				}
			} else {
				if(grid[i][j]-'0'!=score[i][j]) {
					cout << "NO" << endl; return 0;
				}
			}
		}
	cout << "YES" << endl;
	return 0;
}
