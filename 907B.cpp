#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=15;
char grid[mx][mx];
int ct[mx/3][mx/3];

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	for (int i=0; i<mx; i++)
		for (int j=0; j<mx; j++)
			grid[i][j]='#', ct[i/3][j/3]=0;	
	for (int i=0; i<9; i++)
		for (int j=0; j<9; j++) {
			cin>>grid[i][j];
			if(grid[i][j]!='.')
				ct[i/3][j/3]++;
		}
	int x,y; cin>>x>>y; x--; y--;
	if(ct[x%3][y%3]==9) {
		for (int i=0; i<9; i++)
			for (int j=0; j<9; j++)
				if(grid[i][j]=='.')
					grid[i][j]='!';
	} else {
		for (int i=0; i<3; i++)
			for (int j=0; j<3; j++) {
				int ii=(x%3)*3 + i, jj=(y%3)*3 + j;
				if(grid[ii][jj]=='.')
					grid[ii][jj]='!';
			}
	}
	for (int i=0; i<9; i++) {
		if(i&&i%3==0) cout << endl;
		for (int j=0; j<9; j++) {
			if(j&&j%3==0) cout << " ";
				cout << grid[i][j];
		}
		cout << endl;
	}
	return 0;
}
