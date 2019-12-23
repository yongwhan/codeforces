#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	int a[n][m], b[n][m];
	for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin>>a[i][j];
	for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin>>b[i][j];
	for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
		int x=min(a[i][j],b[i][j]), y=max(a[i][j],b[i][j]);
		a[i][j]=x; b[i][j]=y;
	}
	bool ok=true;
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			if(j+1<m&&(a[i][j]>=a[i][j+1]||b[i][j]>=b[i][j+1])) ok=false;
			if(i+1<n&&(a[i][j]>=a[i+1][j]||b[i][j]>=b[i+1][j])) ok=false;
		}
	}
	cout<<(ok?"Possible":"Impossible")<<endl;
	return 0;
}
