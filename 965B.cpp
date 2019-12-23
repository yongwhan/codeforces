#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	vector<string> grid(n);
	vector<vector<int>> ct(n, vector<int>(n,0));
	for (int i=0; i<n; i++)
		cin>>grid[i];
	int ii=1, jj=1, mx=0;
	for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
		bool ok=true;
		for (int t=0; t<k; t++) {
			if(j+t>=n) { ok=false; break; }
			if(grid[i][j+t]=='#') { ok=false; break; }
		}
		if(ok) {
			for (int t=0; t<k; t++) {
				ct[i][j+t]++;
				if(ct[i][j+t]>mx) mx=ct[i][j+t], ii=i+1, jj=j+t+1;
			}
		}

		ok=true;
		for (int t=0; t<k; t++) {
			if(i+t>=n) { ok=false; break; }
			if(grid[i+t][j]=='#') { ok=false; break; }
		}
		if(ok) {
			for (int t=0; t<k; t++) {
				ct[i+t][j]++;
				if(ct[i+t][j]>mx) mx=ct[i+t][j], ii=i+t+1, jj=j+1;
			}
		}
	}
	cout << ii << " " << jj << endl;
	return 0;
}
