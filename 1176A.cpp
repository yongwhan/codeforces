#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		ll n; cin>>n;
		int ret=0;
		for (int i=0; i<1000; i++) {
			if(n%2==0) n/=2, ret++;
			if(n%3==0) n/=3, n*=2, ret++;
			if(n%5==0) n/=5, n*=4, ret++;
		}
		cout<<(n==1?ret:-1)<<endl;
	}
	return 0;
}
