#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int q; cin>>q;
	while(q--) {
		ll n,a,b; cin>>n>>a>>b;
		cout << (n/2)*min(a*2,b) + (n%2)*a << endl;
	}
	return 0;
}
