#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

ll eval(ll n, ll s) {
	return (n%s+1)*(n/s+1);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,m,s; cin>>n>>m>>s;
	cout << eval(n-1,s)*eval(m-1,s) << endl;
	return 0;
}
