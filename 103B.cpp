#include<bits/stdc++.h>
using namespace std;

const int mx=105;

bool conn[mx][mx];

int main() {
	memset(conn, false, sizeof(conn));
	int n,m; cin>>n>>m;
	if(n!=m) { cout << "NO" << endl; return 0; }
	for (int i=0; i<m; i++) {
		int a,b; cin>>a>>b; a--; b--;
		conn[a][b]=conn[b][a]=true;
	}

	for (int k=0; k<n; k++)
	for (int i=0; i<n; i++)
	for (int j=0; j<n; j++)
		conn[i][j]|=(conn[i][k]&&conn[k][j]);

	for (int i=0; i<n; i++)
		if(!conn[0][i]) { cout << "NO" << endl; return 0; }
	cout << "FHTAGN!" << endl;
	return 0;
}
