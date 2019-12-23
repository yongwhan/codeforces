#include<bits/stdc++.h>
using namespace std;

const int mx=1e3+5;
int dp[mx][mx][15][2];

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,k,ret=0; cin>>n>>m>>k;
	string s,t; cin>>s>>t;
	for (int c=1; c<=k; c++)
	for (int i=1; i<=n; i++)
	for (int j=1; j<=m; j++) {
		if(s[i-1]==t[j-1]) dp[i][j][c][1]=1+max(dp[i-1][j-1][c-1][0],dp[i-1][j-1][c][1]);
		dp[i][j][c][0]=max({dp[i][j][c][1],dp[i-1][j][c][0],dp[i][j-1][c][0]});
		ret=max({ret,dp[i][j][c][0],dp[i][j][c][1]});
	}
	cout << ret << endl;
	return 0;
}
