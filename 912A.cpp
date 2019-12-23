#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll a,b,x,y,z; cin>>a>>b>>x>>y>>z;
	ll p=2LL*x+y, q=y+3LL*z;
	cout << max(0LL,p-a)+max(0LL,q-b) << endl;
	return 0;
}
