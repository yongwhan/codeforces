#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		ll L,v,l,r; cin>>L>>v>>l>>r;
		cout << L/v - (r/v - (l-1)/v) << endl;
	}
	return 0;
}
