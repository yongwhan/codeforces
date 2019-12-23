#include<bits/stdc++.h>
using namespace std;

const int mx=1e6+777;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,p; cin>>n>>p;
	for (int k=1; k<mx; k++) {
		int cur=n-k*p;
		if(cur<0) continue;
		int ct=__builtin_popcount(cur);
		if(ct&&ct<=k&&cur>=k) {
			cout<<k<<"\n";
			return 0;
		}
	}
	cout<<-1<<"\n";
	return 0;
}
