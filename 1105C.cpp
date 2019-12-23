#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mod=1e9+7;

int eval(int x, int r) {
	if(x<r) return 0;
	return (x-r)/3+1;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,l,r; cin>>n>>l>>r;
	vector<ll> t(3);
	for (int i=0; i<3; i++)
		t[i]=eval(r,i)-eval(l-1,i);

	vector<vector<ll>> dp(n,vector<ll>(3,0));
	for (int i=0; i<3; i++)
		dp[0][i]=t[i];
	for (int i=1; i<n; i++) {
		for (int j=0; j<3; j++) {
			for (int k=0; k<3; k++) {
				int x=(j+k)%3;
				dp[i][x]=(dp[i][x]+dp[i-1][j]*t[k])%mod;
			}
		}
	}
	cout << dp[n-1][0] << endl;
	return 0;
}
