#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	vector<string> g(n);
	for (int i=0; i<n; i++)
		cin>>g[i];
	map<int,int> row, col;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			if(g[i][j]=='*')
				row[i]++, col[j]++;
	ll ret=0;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			if(g[i][j]=='*')
				ret+=(row[i]-1)*(col[j]-1);
	cout << ret << endl;
	return 0;
}
