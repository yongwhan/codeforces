#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mx=3e5+777, inf=1e9;
int dp[mx];

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	for (int i=0; i<mx; i++)
		dp[i]=inf;

	int n=s.size();
	for (int i=0; i<n; i++)
		for (int j=1; i+2*j<n; j++)
			if(s[i]==s[i+j]&&s[i+j]==s[i+2*j]) {
				dp[i]=i+2*j;
				break;
			}

	for (int i=n-2; i>=0; i--)
		dp[i]=min(dp[i+1],dp[i]);

	ll ret=0;
	for (int i=0; i<n; i++)
		if(dp[i]!=inf)
			ret+=n-dp[i];
	cout << ret << endl;
	return 0;
}
