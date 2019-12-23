#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

ll eval(vector<vector<char>> &grid, int n, int m, int k) {
	ll ret=0;
	for (int i=0; i<n; i++) {
		int cur=0;
		for (int j=0; j<m; j++) {
			if(grid[i][j]=='*') ret+=max(0,cur-k+1), cur=0;
			else cur++;
		}
		if(cur) ret+=max(0,cur-k+1);
	}
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,k; cin>>n>>m>>k;
	vector<vector<char>> grid(n,vector<char>(m)), grid2(m,vector<char>(n));
	for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin>>grid[i][j], grid2[j][i]=grid[i][j];
	ll ret=eval(grid,n,m,k);
	if(k!=1) ret+=eval(grid2,m,n,k);
	cout << ret << endl;
	return 0;
}
