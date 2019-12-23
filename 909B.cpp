#include<bits/stdc++.h>
using namespace std;

const int mx=105;
int a[mx];

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	a[1]=1;
	a[2]=2;
	for (int i=3; i<mx; i++)
		a[i]=i+a[i-2];
	int n; cin>>n;
	cout << a[n] << endl;
	return 0;
}
