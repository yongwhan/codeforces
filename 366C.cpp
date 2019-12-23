#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int inf=2077;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	vector<int> a(n), b(n);
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<n; i++) cin>>b[i];
	map<ii,int> dp;
	dp[{0,0}]=0;
	for (int i=0; i<n; i++)
		for (int j=-inf; j<=inf; j++)
			if(dp.find({i,j})!=dp.end())
				dp[{i+1,j}]=max(dp[{i+1,j}], dp[{i,j}]),
				dp[{i+1,j+a[i]-b[i]*k}]=max(dp[{i+1,j+a[i]-b[i]*k}], dp[{i,j}]+a[i]);
	int ret=dp[{n,0}];
	cout << (ret ? ret : -1) << endl;
	return 0;
}
