#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<string> grid(2);
	for (int i=0; i<2; i++)
		cin>>grid[i];
	int n=grid[0].size(), ret=0;
	for (int i=0; i<n-1; i++) {
		int cur=0;
		for (int j=0; j<2; j++)
			for (int k=0; k<2; k++)
				if(grid[j][i+k]=='0')
					cur++;
		if(cur>=3) {
			ret++;
			int ct=3;
			for (int j=0; j<2; j++)
				for (int k=0; k<2; k++)
					if(grid[j][i+k]=='0'&&ct)
						ct--,
						grid[j][i+k]='X';
		}
	}
	cout << ret << endl;
	return 0;
}
