#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

ll eval(int x) {
	return (x%2) ? -x : x;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll q,l,r; cin>>q;
	while(q--) {
		ll ret=0;
		cin>>l>>r;
		if(l%2==0) ret-=eval(--l);
		if(r%2) ret-=eval(++r);
		ret+=(r-l+1)/2;
		cout << ret << endl;
	}
	return 0;
}
