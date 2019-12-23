#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,ret=0,m,l,r; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	for (int i=0; i<n; i++)
		for (int j=i+1; j<n; j++)
			if(a[i]>a[j]) ret^=1;
	cin>>m;
	for (int i=0; i<m; i++) {
		cin>>l>>r;
		ret^=(r-l)*(r-l+1)/2;
		string ans="even";
		if(ret&1) ans="odd";
		cout << ans << endl;
	}
	return 0;
}
