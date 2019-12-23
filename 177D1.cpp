#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m,c; cin>>n>>m>>c;
	vector<int> a(n), b(m);
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<m; i++) cin>>b[i];
	for (int i=0; i<=n-m; i++)
		for (int j=0; j<m; j++)
			a[i+j]=(a[i+j]+b[j])%c;
	for (auto it : a)
		cout << it << " ";
	cout << endl;
	return 0;
}
