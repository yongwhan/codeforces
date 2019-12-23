#include<bits/stdc++.h>
using namespace std;

const int n=10;

int dx[]={1,0,-1,0,1,1,-1,-1}, dy[]={0,1,0,-1,1,-1,1,-1};

bool ok(int x) {
	return 0<=x&&x<n;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	char grid[n][n];
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			cin>>grid[i][j];
	for (int i=0; i<n; i++) for (int j=0; j<n; j++) if(grid[i][j]=='.') {
		grid[i][j]='X';
		for (int ii=0; ii<n; ii++) for (int jj=0; jj<n; jj++) for (int k=0; k<8; k++) {
			int ct=0;
			for (int t=0; t<5; t++) {
				int iii=ii+dx[k]*t, jjj=jj+dy[k]*t;
				if(ok(iii)&&ok(jjj)&&grid[iii][jjj]=='X') ct++;
			}
			if(ct==5) {
				cout << "YES" << endl;
				return 0;
			}
		}
		grid[i][j]='.';
	}
	cout << "NO" << endl;
	return 0;
}
