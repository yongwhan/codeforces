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
	ll n,m; cin>>n>>m;
	bool grid[n][m];
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++) cin>>grid[i][j];
	ll ret=-n*m;
	for (int i=0; i<n; i++) {
		int a=0, b=0;
		for (int j=0; j<m; j++)
			if(grid[i][j]) a++;
			else b++;
		ret+=(1LL<<a)-1 + (1LL<<b)-1;
	}
	for (int j=0; j<m; j++) {
		int a=0, b=0;
		for (int i=0; i<n; i++)
			if(grid[i][j]) a++;
			else b++;
		ret+=(1LL<<a)-1 + (1LL<<b)-1;
	}
	cout << ret << endl;
	return 0;
}
