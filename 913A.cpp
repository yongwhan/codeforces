#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,m; cin>>n>>m;
	if(n>35) {
		cout << m << endl;
		return 0;
	}
	cout << m%(1LL<<n) << endl;
	return 0;
}
