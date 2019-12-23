#include<bits/stdc++.h>
using namespace std;

const int mx=1e6+777;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k,x; cin>>n>>k;
	vector<int> cumul(mx,0);
	for (int i=0; i<n; i++) cin>>x, cumul[x]++;
	for (int i=1; i<mx; i++) cumul[i]+=cumul[i-1];
	int ret=0;
	for (int g=1; g<mx; g++) {
		int cur=0;
		for (int i=1; i*g<mx; i++) cur+=cumul[min({i*g+k,(i+1)*g-1,mx-1})]-cumul[i*g-1];
		if(cur==n) ret=g;
	}
	cout << ret << endl;
	return 0;
}
