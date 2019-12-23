#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n; cin>>n;
	ll ret=n/2;
	if(n%2)
		ret-=n;
	cout << ret << endl;
	return 0;
}
