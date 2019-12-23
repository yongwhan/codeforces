#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	int mat[n][n];
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			cin>>mat[i][j];
	for (int i=0; i<n; i++) {
		ll cur=0;
		for (int j=0; j<n; j++)
			if(j!=i) cur|=mat[i][j];
		cout << cur << " ";
	}
	cout << endl;
	return 0;
}
