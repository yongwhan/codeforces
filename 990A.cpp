#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,m,a,b; cin>>n>>m>>a>>b;
	ll lo=n/m *m, hi=lo+m;
	cout << min((n-lo)*b, (hi-n)*a) << endl;
	return 0;
}
