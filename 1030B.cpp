#include<bits/stdc++.h>
using namespace std;

bool ok(int a, int d, int n) {
	return d<=a&&a<=(2*n-d);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,d; cin>>n>>d;
	int m; cin>>m;
	int x,y;
	while(m--)
		cin>>x>>y,
		cout<<((ok(x+y,d,n)&&ok(n-x+y,n-d,n)) ? "YES" : "NO")<<endl;
	return 0;
}
