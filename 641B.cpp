#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,q; cin>>n>>m>>q;
	int grid[n][m];
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			grid[i][j]=0;
	vector<vector<int>> instr(q);
	for (int i=0; i<q; i++) {
		int t; cin>>t;
		instr[q-1-i].push_back(t);
		int u=1;
		if(t==3) u=3;
		for (int j=0; j<u; j++) {
			int x; cin>>x;
			instr[q-1-i].push_back(x);
		}
	}
	for (int i=0; i<q; i++) {
		auto cur=instr[i];
		if(cur[0]==1) {
			int r=cur[1]-1;
			vector<int> v(m);
			for (int j=0; j<m; j++)
				v[j]=grid[r][(j+m-1)%m];
			for (int j=0; j<m; j++)
				grid[r][j]=v[j];
		} else if(cur[0]==2) {
			int c=cur[1]-1;
			vector<int> v(n);
			for (int j=0; j<n; j++)
				v[j]=grid[(j+n-1)%n][c];
			for (int j=0; j<n; j++)
				grid[j][c]=v[j];
		} else grid[cur[1]-1][cur[2]-1]=cur[3];
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			if(j) cout << " ";
			cout << grid[i][j];
		}
		cout << endl;
	}
	return 0;
}
