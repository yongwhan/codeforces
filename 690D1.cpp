#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int R,C; cin>>R>>C;
	char grid[R][C];
	for (int i=0; i<R; i++)
		for (int j=0; j<C; j++)
			cin>>grid[R-1-i][j];
	int ret=0, ct=0;
	if(grid[0][0]=='B') ct++;
	for (int j=1; j<C; j++) {
		if(grid[0][j]=='B') ct++;
		else {
			if(ct) ret++;
			ct=0;
		}
	}
	if(ct) ret++;
	cout << ret << endl;
	return 0;
}
