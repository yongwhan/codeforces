#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m; cin>>n>>m;
	cout<<(m?m*2>n?n-m:m:1)<<"\n";
	return 0;
}
