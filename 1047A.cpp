#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	if(n%3<=1) cout << 1 << " " << 1 << " " << n-2 << endl;
	else cout << 1 << " " << 2 << " " << n-3 << endl;
	return 0;
}
