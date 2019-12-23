#include<cstdio>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<sstream>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	vector<string> grid(n);
	for (int i=0; i<n; i++) cin>>grid[i];

	int xmin=1e9, xmax=-1, ymin=1e9, ymax=-1, ct=0;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			if(grid[i][j]=='B') {
				xmin=min(xmin,i);
				xmax=max(xmax,i);
				ymin=min(ymin,j);
				ymax=max(ymax,j);
				ct++;
			}
	if(!ct) { cout << 1 << endl; return 0; }
	int l=max(xmax-xmin,ymax-ymin)+1;
	if(l>min(n,m)) { cout << -1 << endl; return 0; }
	cout << l*l-ct << endl;
	return 0;
}
