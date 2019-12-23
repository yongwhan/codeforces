#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--) {
		long long n,k,ret=0,r; cin>>n>>k;
		while(n) {
			r=n%k;
			if(r) ret+=r, n-=r;
			else ret++, n/=k;
		}
		cout<<ret<<endl;
	}
	return 0;
}
