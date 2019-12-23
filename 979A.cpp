#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n; cin>>n;
	if(n==0) cout << 0 << endl;
	else {
		n++;
		if(n%2) cout << n << endl;
		else cout << n/2 << endl;
	}
	return 0;
}
