#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const ll inf=5e18;
const int mx=1e5+5;
ll dp[mx][5];

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	for (int i=0; i<mx; i++)
		for (int j=0; j<5; j++) {
			if(!j) dp[i][j]=0;
			else dp[i][j]=-inf;
		}
	ll n; cin>>n;
	vector<ll> p(3), a(n);
	for (int i=0; i<3; i++) cin>>p[i];
	for (int i=0; i<n; i++) cin>>a[i];
	for (int j=1; j<=3; j++)
		for (int i=1; i<=n; i++)
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]+a[i-1]*p[j-1]);
	cout << dp[n][3] << endl;
	return 0;
}
