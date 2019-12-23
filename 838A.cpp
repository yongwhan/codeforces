#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=5077;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	vector<string> grid(n);
	for (int i=0; i<n; i++)
		cin>>grid[i];
	vector<vector<int>> sum(mx, vector<int>(mx,0));
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			sum[i+1][j+1]=grid[i][j]-'0';
	for (int i=1; i<mx; i++)
		for (int j=1; j<mx; j++)
			sum[i][j]=sum[i][j]+sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1];

	int ret=-1;
	for (int k=2; k<=max(n,m); k++) {
		int cur=0;
		for (int i=1; i<=(n+k-1)/k; i++) {
			for (int j=1; j<=(m+k-1)/k; j++) {
				int val=sum[i*k][j*k]-sum[(i-1)*k][j*k]-sum[i*k][(j-1)*k]+sum[(i-1)*k][(j-1)*k];
				cur+=min(val,k*k-val);
			}
		}
		if(ret==-1) ret=cur;
		else ret=min(ret,cur);
	}
	cout << ret << endl;
	return 0;
}
