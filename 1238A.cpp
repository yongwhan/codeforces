#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		ll x,y; cin>>x>>y;
		cout<<(x==y+1?"NO":"YES")<<endl;
	}
	return 0;
}
