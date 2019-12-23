#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll q,n,m,k; cin>>q;
	while(q--) {
		cin>>n>>m>>k;
		if(n<m) swap(n,m);
		if(n%2!=m%2) k--, n--;
		else if(n%2!=k%2) n--, m--, k-=2;
		cout << (k<n ? -1 : k) << endl;
	}
	return 0;
}
