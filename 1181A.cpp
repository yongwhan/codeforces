#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() {
	ll x,y,z; cin>>x>>y>>z;
	ll k=(x+y)/z;
	cout<<k<<" ";
	cout<<(k==(x/z)+(y/z)?0:min(z-x%z,z-y%z))<<endl;
	return 0;
}
