#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	if(n%2) cout << 9 << " " << n-9 << endl;
	else cout << 4 << " " << n-4 << endl;
	return 0;
}
