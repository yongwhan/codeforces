#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int dx[]={0,1,0,-1}, dy[]={1,0,-1,0};

bool ok(int x, int l) {
	return 0<=x&&x<l;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; char ch; cin>>n>>m>>ch;
	char grid[n][m];
	for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin>>grid[i][j];
	set<char> st;
	for (int i=0; i<n; i++) for (int j=0; j<m; j++) if(grid[i][j]==ch) {
		for (int k=0; k<4; k++) {
			int x=i+dx[k], y=j+dy[k];
			if(ok(x,n)&&ok(y,m)) {
				char cur=grid[x][y];
				if(cur!=ch&&cur!='.') st.insert(cur);
			}
		}
	}
	cout << st.size() << endl;
	return 0;
}
