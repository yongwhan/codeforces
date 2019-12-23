#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n, m; cin>>n>>m;
	vector<string> grid(n);
	for (int i=0; i<n; i++)
		if(i%2==0) grid[i]=string(m,'#');
		else grid[i]=string(m,'.');
	for (int i=0; i<n; i++)
		if(i%4==1) grid[i][m-1]='#';
		else if(i%4==3) grid[i][0]='#';
	for (auto it : grid)
		cout << it << endl;	
	return 0;
}
