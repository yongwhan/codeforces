#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int r,c; cin>>r>>c;
	vector<string> grid(r);
	for (int i=0; i<r; i++)
		cin>>grid[i];
	vector<int> row(r,0), col(c,0);
	for (int i=0; i<r; i++)
		for (int j=0; j<c; j++)
			if(grid[i][j]=='S')
				row[i]++, col[j]++;
	int ret=0;
	for (int i=0; i<r; i++)
		for (int j=0; j<c; j++)
			if(!row[i]||!col[j])
				ret++;
	cout << ret << endl;
	return 0;
}
