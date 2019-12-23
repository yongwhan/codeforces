#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t,n; cin>>t;
	while(t--)
		cin>>n, cout << max(0,n-2) << endl;
	return 0;
}
