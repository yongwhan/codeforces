#include<bits/stdc++.h>
using namespace std;

const int mx=1e4+2;
int16_t prefix[mx][mx];

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	vector<int> p(n);
	for (int i=0; i<n; i++)
		cin>>p[i];
	for (int i=0; i<mx; i++)
		for (int j=0; j<mx; j++)
			prefix[i][j]=0;	
	for (int i=0; i<n; i++)
		prefix[i+1][p[i]]++;
	for (int i=1; i<n; i++)
		for (int j=0; j<mx; j++)
			prefix[i+1][j]+=prefix[i][j];
	for (int i=0; i<mx; i++)
		for (int j=1; j<mx; j++)
			prefix[i][j]+=prefix[i][j-1];
	int l,r,x;
	for (int i=0; i<m; i++) {
		cin>>l>>r>>x;
		int cur=p[x-1];
		if(prefix[r][cur]-prefix[l-1][cur]==x-l+1) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
