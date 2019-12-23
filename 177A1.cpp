#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	int g[n][n];
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			cin>>g[i][j];
	int ret=-3*g[n/2][n/2];
	for (int i=0; i<n; i++)
		ret+=g[i][i]+g[i][n-1-i]+g[n/2][i]+g[i][n/2];
	cout << ret << endl;
	return 0;
}
