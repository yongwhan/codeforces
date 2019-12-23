#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,k; cin>>n>>m>>k;
	bool a[n][m];
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			cin>>a[i][j];
	vector<int> ret(n,0), total(m,0);
	vector<map<int,int>> ct(m);
	int x,y;
	for (int i=0; i<k; i++) {
		cin>>x>>y; x--; y--;
		ct[y][x]++;
		total[y]++;
	}
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			if(a[j][i])
				ret[j]+=(total[i]-ct[i][j]);
	for (auto it : ret)
		cout << it << " ";
	cout << endl;
	return 0;
}
