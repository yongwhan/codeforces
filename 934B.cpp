#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll x; cin>>x;
	if(x>36) { cout << -1 << endl; return 0; }
	while(x>=2)
		cout << "8", x-=2;
	if(x)
		cout << "6", x--;
	cout << endl;
	return 0;
}
