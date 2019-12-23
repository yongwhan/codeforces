#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,j,ret=1; cin>>n;
	map<int,int> par, col;
	for (int i=2; i<=n; i++)
		cin>>j, par[i]=j;
	for (int i=1; i<=n; i++)
		cin>>col[i];
	for (int i=2; i<=n; i++)
		if(col[i]!=col[par[i]])
			ret++;
	cout << ret << endl;
	return 0;
}
