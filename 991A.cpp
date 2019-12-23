#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b,c,n; cin>>a>>b>>c>>n;
	int ret=n-(a+b-c);
	if(ret>0 && min(a,b)>=c && max({a,b,c})<=n) cout << ret << endl;
	else cout << -1 << endl;
	return 0;
}
