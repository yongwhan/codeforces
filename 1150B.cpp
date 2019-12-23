#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<string> g(n);
	for (int i=0; i<n; i++)
		cin>>g[i];
	for (int i=0; i<n-2; i++)
		for (int j=1; j<n-1; j++)
			if(g[i][j]=='.') {
				int x=i+1, y=j;
				if(g[x][y]=='#') {
					cout << "NO" << endl;
					return 0;
				}
				g[x][y]='#';
				for (int di=-1; di<=1; di++)
					for (int dj=-1; dj<=1; dj++) {
						if(abs(di)+abs(dj)!=1)
							continue;
						int ii=x+di, jj=y+dj;
						if(ii<0||ii>=n||jj<0||jj>=n) {
							cout << "NO" << endl;
							return 0;
						}
						if(g[ii][jj]=='#') {
							cout << "NO" << endl;
							return 0;
						}
						g[ii][jj]='#';
					}
			}
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			if(g[i][j]=='.') {
				cout << "NO" << endl;
				return 0;
			}
	cout << "YES" << endl;
	return 0;
}
