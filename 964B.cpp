#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,A,B,C,T; cin>>n>>A>>B>>C>>T;
	int ret=n*A,t;
	for (int i=0; i<n; i++) {
		cin>>t;
		if(B<C)
			ret+=(C-B)*(T-t);
	}
	cout << ret << endl;
	return 0;
}
