#include<bits/stdc++.h>
using namespace std;
int main() {
	int n; cin>>n;
	long long a[n][n];
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			cin>>a[i][j];
	int x=sqrt((a[0][1]*a[0][2])/a[1][2]);
	cout<<x<<" ";
	for (int i=1; i<n; i++)
		cout<<a[0][i]/x<<" ";
	cout<<endl;
	return 0;
}
