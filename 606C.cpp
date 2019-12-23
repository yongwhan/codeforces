#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x,ret=0; cin>>n;
	vector<int> dp(1e5+77,0);
	for (int i=0; i<n; i++)
		cin>>x,
		dp[x]=dp[x-1]+1,
		ret=max(ret,dp[x]);
	cout << n-ret << endl;
	return 0;
}
