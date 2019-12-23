#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mx=1077, mod=1e9+7;
ll binom[mx][mx], dp[mx];

int count(int x) {
	int ret=0;
	while(x) ret+=x%2, x/=2;
	return ret;
}

ll compute2(string n, int ct) {
	int sz=n.size(); sz--;
	if(sz>=ct) return binom[sz][ct];
	else return 0;
}

ll compute(string n, int ct) {
	if(ct<0) return 0;
	if(n.empty()) {
		if(ct) return 0;
		else return 1;
	}
	ll ret=0;
	char ch=n[0];
	string m=n.substr(1);
	if(ch=='0') ret=(ret+compute(m,ct))%mod;
	else ret=(ret+compute2(n,ct))%mod, ret=(ret+compute(m,ct-1))%mod;
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	dp[0]=dp[1]=0;
	for (int i=2; i<mx; i++) dp[i]=dp[count(i)]+1;
	string n; cin>>n;
	int k; cin>>k;
	if(k==0) {
		cout << 1 << endl;
		return 0;
	} else if(k==1) {
		cout << n.size()-1 << endl;
		return 0;
	}
	for (int i=0; i<mx; i++) for (int j=0; j<mx; j++) binom[i][j]=0;
	for (int i=0; i<mx; i++) {
		binom[i][0]=binom[i][i]=1;
		for (int j=1; j<i; j++) binom[i][j]=(binom[i-1][j]+binom[i-1][j-1])%mod;
	}
	ll ret=0;
	for (int i=1; i<mx; i++) if(dp[i]+1==k) {
		ret=(ret+compute(n,i))%mod;
	}
	cout << ret << endl;
	return 0;
}
