#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=105;
vector<int> grid[mx][mx];
int c;

void add(int x, int y, int z, int w, bool pos) {
	for (int i=0; i<c; i++)
		if(pos) grid[x][y][i]+=grid[z][w][i];
		else grid[x][y][i]-=grid[z][w][i];
}

void add2(vector<int> &ret, int x, int y, bool pos) {
	for (int i=0; i<c; i++)
		if(pos) ret[i]+=grid[x][y][i];
		else ret[i]-=grid[x][y][i];
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,q; cin>>n>>q>>c; c++;
	for (int i=0; i<mx; i++)
		for (int j=0; j<mx; j++) {
			vector<int> cur(c,0);
			grid[i][j]=cur;
		}
	for (int i=0; i<n; i++) {
		int x,y,s; cin>>x>>y>>s;
		grid[x][y][s]++;
	}

	for (int i=0; i<mx; i++) {
		for (int j=0; j<mx; j++) {
			if(i) add(i, j, i-1, j, true);
			if(j) add(i, j, i, j-1, true);
			if(i&&j) add(i, j, i-1, j-1, false);
		}
	}

	for (int iter=0; iter<q; iter++) {
		int t, x1, y1, x2, y2; cin>>t>>x1>>y1>>x2>>y2;
		vector<int> cur(c,0);
		add2(cur, x2,y2, true);
		add2(cur, x1-1, y2, false);
		add2(cur, x2, y1-1, false);
		add2(cur, x1-1, y1-1, true);
		ll ret=0;
		for (int i=0; i<c; i++) ret+=(ll(i+t)%c) * cur[i];
		cout << ret << endl;
	}
	return 0;
}
