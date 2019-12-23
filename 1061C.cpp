#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7, mx=1e6+777;
vector<int> dp(mx,0);

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[n-1-i];
	for (int i=0; i<n; i++) {
		vector<int> f;
		for (int d=1; d*d<=a[i]; d++) {
			if(a[i]%d==0) {
				f.push_back(d);
				int e=a[i]/d;
				if(e!=d)
					f.push_back(e);
			}
		}
		sort(f.begin(), f.end());
		for (int x : f)
			dp[x]=(dp[x]+1+dp[x+1])%mod;
	}
	cout << dp[1] << endl;
	return 0;
}
