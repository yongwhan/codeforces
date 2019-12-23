#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,a,ret=2e9; cin>>n;
	for (int i=0; i<n; i++)
		cin>>a, ret=min(ret,a/max(i,n-1-i));
	cout << ret << endl;
	return 0;
}
