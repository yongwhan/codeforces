#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x,u=1<<18,v=1<<19; cin>>n>>x;
	if(n==2&&x==0) {
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	if(n==1) {
		cout << x << endl;
		return 0;
	}
	if(n==2) {
		cout << 0 << " " << x << endl;
		return 0;
	}
	int y=0;
	for (int i=1; i<=n-3; i++) cout << i << " ", y^=i;
	if(x==y) cout << u << " " << v << " " << (u^v) << endl;
	else cout << 0 << " " << u << " " << (u^x^y) << endl;
	return 0;
}
