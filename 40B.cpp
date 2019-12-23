#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,x; cin>>n>>m>>x;
	int t=(x-1)<<1;
	n-=t; m-=t;
	if(n<=0||m<=0) cout << 0 << endl;
	else if(min(n,m)==1) cout << (max(n,m)+1)/2 << endl;
	else cout << (n+m)-2 << endl;
	return 0;
}
