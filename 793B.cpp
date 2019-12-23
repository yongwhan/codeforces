#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

const int mx=1050;
int dx[]={0,1,0,-1}, dy[]={1,0,-1,0}, n,m;
char grid[mx][mx];

bool ok(int x, int l) {
	return 0<=x&&x<l;
}

void eval(set<ii> &cur, int k) {
	set<ii> nxt;
	for (int i=0; i<k; i++) {
		nxt.clear();
		for (auto x : cur) {
			for (int j=0; j<4; j++) {
				for (int t=0; t<mx; t++) {
					ii y=x;
					y.first+=t*dx[j]; y.second+=t*dy[j];
					if(ok(y.first,n)&&ok(y.second,m)) {
						if(grid[y.first][y.second]=='*') break;
						nxt.insert(y);
					}
				}
			}
		}
		cur=nxt;
	}
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	cin>>n>>m;
	set<ii> s,t;
	for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
		char ch;
		cin>>ch;
		grid[i][j]=ch;
		ii cur={i,j};
		if(ch=='S') s.insert(cur), grid[i][j]='.';
		else if(ch=='T') t.insert(cur), grid[i][j]='.';
	}
	eval(s,2);
	eval(t,1);

	for (auto x : t)
		if(s.find(x)!=s.end()) {
			cout << "YES" << endl;
			return 0;
		}
	cout << "NO" << endl;
	return 0;
}
