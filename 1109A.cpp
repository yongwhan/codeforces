#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int dp[2][1<<21];

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a,pre=0; cin>>n;
	ll ret=0;
	dp[0][0]++;
	for (int i=0; i<n; i++)
		cin>>a, pre^=a, ret+=dp[(i+1)&1][pre]++;
	cout << ret << endl;
	return 0;
}
