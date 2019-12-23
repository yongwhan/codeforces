#include<bits/stdc++.h>
using namespace std;

const int mx=1e5+77;
vector<int> t(mx,0), dp(mx,0);

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	for (int i=1; i<=n; i++)
		cin>>t[i],
		dp[i]=min({dp[i-1]+20,
							dp[upper_bound(t.begin()+1,t.begin()+i,t[i]-90)-t.begin()-1]+50,
							dp[upper_bound(t.begin()+1,t.begin()+i,t[i]-1440)-t.begin()-1]+120}),
		cout << dp[i]-dp[i-1] << endl;
	return 0;
}
