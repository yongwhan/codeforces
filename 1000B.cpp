#include<bits/stdc++.h>
using namespace std;

const int mx=1e5+77;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n, m; cin>>n>>m;
	vector<int> a(mx,0), b(mx,0);
	int f=1;
	for (int i=1; i<=n; i++)
		cin>>a[i],
		b[i]=b[i-1]+f*(a[i]-a[i-1]),
		f^=1;
	b[n+1]=b[n]+f*(m-a[n]);
	int ret=b[n+1];
	for (int i=1; i<=n; i++)
		ret=max(ret, 2*b[i]+m-a[i]-b[n+1]-1);
	cout << ret << endl;
	return 0;
}
