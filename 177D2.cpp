#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m,c,t=0; cin>>n>>m>>c;
	vector<int> a(n), b(m);
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<m; i++) cin>>b[i];
	for (int i=0; i<n; i++) {
		if (i<m) t=(t+b[i])%c;
		if (i>n-m) t=(t+c-b[i-n+m-1])%c;
		cout << (a[i]+t)%c << " ";
	}
	cout << endl;
	return 0;
}
