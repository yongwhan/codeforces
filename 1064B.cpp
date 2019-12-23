#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		ll a; cin>>a;
		ll ret=1;
		while(a) {
			if(a%2) ret<<=1;
			a>>=1;
		}
		cout << ret << endl;
	}
	return 0;
}
