#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	char grid[n][7];
	for (int i=0; i<n; i++)
		for (int j=0; j<7; j++)
			cin>>grid[i][j];
	int ret=0;
	for (int j=0; j<7; j++) {
		int cur=0;
		for (int i=0; i<n; i++)
			if(grid[i][j]=='1') cur++;
		ret=max(ret,cur);
	}
	cout << ret << endl;
	return 0;
}
