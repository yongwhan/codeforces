#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		ll a,b,k; cin>>a>>b>>k;
		cout << (a-b)*(k/2) + a*(k%2) << endl;
	}
	return 0;
}
