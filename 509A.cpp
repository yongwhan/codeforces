#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a[15][15];
	int n; cin>>n;
	for (int i=1; i<=n; i++)
		a[i][1]=a[1][i]=1;
	for (int i=2; i<=n; i++)
		for (int j=2; j<=n; j++)
			a[i][j]=a[i-1][j]+a[i][j-1];
	cout << a[n][n] << endl;
	return 0;
}
