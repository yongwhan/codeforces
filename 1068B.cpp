#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll b; cin>>b;
	ll ret=0;
	for (ll x=1; x*x<=b; x++) {
		if(b%x==0) {
			ret++;
			ll y=b/x;
			if(x!=y) ret++;
		}
	}
	cout << ret << endl;
	return 0;
}
