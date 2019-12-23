#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

ll dist(ll x, ll y, ll a, ll b) {
	return max(abs(x-a),abs(y-b));
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,x,y; cin>>n>>x>>y;
	cout << ((dist(x,y,1,1)<=dist(x,y,n,n)) ? "White" : "Black") << endl;
	return 0;
}
