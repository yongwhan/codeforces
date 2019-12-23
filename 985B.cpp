#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	vector<string> grid(n);
	for (int i=0; i<n; i++) cin>>grid[i];
	vector<int> ct(m,0);
	for (int i=0; i<n; i++) for (int j=0; j<m; j++)
		if(grid[i][j]=='1') ct[j]++;
	for (int i=0; i<n; i++) {
		bool ok=true;
		for (int j=0; j<m; j++)
			if(grid[i][j]=='1'&&ct[j]<=1) ok=false;
		if(ok) { cout << "YES" << endl; return 0; }
	}
	cout << "NO" << endl;
	return 0;
}
