#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll q; cin>>q;
	while(q--) {
		ll l,r,d; cin>>l>>r>>d;
		if(d<l) cout << d << endl;
		else {
			if(r%d) cout << (r+d-1)/d * d << endl;
			else cout << r+d << endl;
		}
	}
	return 0;
}
