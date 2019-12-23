#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int dx[]={1,1,-1,-1}, dy[]={1,-1,1,-1};

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<string> grid(n);
	for (int i=0; i<n; i++)
		cin>>grid[i];
	int ret=0;
	for (int i=1; i<n-1; i++) {
		for (int j=1; j<n-1; j++) {
			if(grid[i][j]!='X')
				continue;
			int cur=0;
			for (int k=0; k<4; k++)
				if(grid[i+dx[k]][j+dy[k]]=='X')
					cur++;
			if(cur==4)
				ret++;
		}
	}
	cout << ret << endl;
	return 0;
}
