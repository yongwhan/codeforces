#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;
int main() {
	map<int,int> dp;
	int s=-1,n;
	dp[s]=1; cin>>n;
	while(n--) {
		char ch; cin>>ch;
		if(ch=='f') s--;
		else for (int i=-2; i>=s; i--) dp[i]=(dp[i]+dp[i+1])%mod;
	}
	cout << dp[s] << endl;
	return 0;
}
