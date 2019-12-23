#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,l,r,q; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	int val[n][n], mx[n][n];
	for (int i=0; i<n; i++)
		val[0][i]=mx[0][i]=a[i];
	for (int i=1; i<n; i++)
		for (int j=0; j<n-i; j++)
			val[i][j]=val[i-1][j]^val[i-1][j+1];
	for (int i=1; i<n; i++)
		for (int j=0; j<n-i; j++)
			mx[i][j]=max({val[i][j], mx[i-1][j], mx[i-1][j+1]});
	cin>>q;
	while(q--)
		cin>>l>>r,
		cout << mx[r-l][l-1] << endl;
	return 0;
}
