#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

void print(vector<string> &grid) {
	cout << "YES" << endl;
	for (auto s : grid)
		cout << s << endl;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<string> grid(n);
	for (int i=0; i<n; i++)
		cin>>grid[i];
	for (int i=0; i<n; i++) {
		if(grid[i][0]=='O'&&grid[i][1]=='O') {
			grid[i][0]=grid[i][1]='+';
			print(grid);
			return 0;
		}

		if(grid[i][3]=='O'&&grid[i][4]=='O') {
			grid[i][3]=grid[i][4]='+';
			print(grid);
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
