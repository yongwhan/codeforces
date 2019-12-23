#include<bits/stdc++.h>
using namespace std;

const int mx=5050;
vector<int> a(mx,0), L(mx,0), R(mx,0), dp(mx,0);

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x; cin>>n;
	for (int i=1; i<=n; i++) {
		cin>>x, a[i]=x, R[x]=i;
		if(!L[x]) L[x]=i;
	}

	for (int i=1; i<=n; i++) {
		dp[i]=dp[i-1];
		int l=i, cur=0;
		for (int j=i; j>=1; j--) {
			if(R[a[j]]>i) break;
			l=min(l,L[a[j]]);
			if(j==R[a[j]]) cur^=a[j];
			if(j==l) dp[i]=max(dp[i],dp[j-1]+cur);
		}
	}
	cout << dp[n] << endl;
	return 0;
}
