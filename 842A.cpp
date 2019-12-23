#include<iomanip>
#include<cmath>
#include<algorithm>
#include<sstream>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

typedef long long ll;

int main() {
	ll l,r,x,y,k; cin>>l>>r>>x>>y>>k;
	bool ok=false;
	for (ll i=x; i<=y; i++) {
		ll cur=i*k;
		if(l<=cur&&cur<=r) ok=true;
	}
	if(ok) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
