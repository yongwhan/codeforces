#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int inf=1e9;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,d; string s;
	cin>>n>>d>>s;
	int dp[n];
	for (int i=0; i<n; i++)
		dp[i]=inf;
	if(s[0]=='1')
		dp[0]=0;
	for (int i=1; i<n; i++) {
		int cur=inf;
		for (int j=1; j<=min(d,i); j++)
			if(s[i]=='1')
				cur=min(cur,dp[i-j]);
		if(cur<inf)
			dp[i]=cur+1;
	}

	if(dp[n-1]<inf) cout << dp[n-1] << endl;
	else cout << -1 << endl;
	return 0;
}
