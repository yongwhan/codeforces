#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int k,n,s,p; cin>>k>>n>>s>>p;
	int ret=(n+s-1)/s;
	ret*=k;
	cout << (ret+p-1)/p << endl;
	return 0;
}
