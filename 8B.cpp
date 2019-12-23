#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=277;
const int offset=107;

const int dx[]={1,-1,0,0};
const int dy[]={0,0,1,-1};

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	char ch;
	vector<vector<bool>> vis(mx, vector<bool>(mx,false));
	int x=offset, y=offset;
	vis[x][y]=true;
	while(cin>>ch) {
		int prevx=x, prevy=y;
		if(ch=='L') x--;
		else if(ch=='R') x++;
		else if(ch=='U') y++;
		else y--;
		if(vis[x][y]) {
			cout << "BUG" << endl; return 0;
		}
		for (int i=0; i<4; i++) {
			int xx=x+dx[i], yy=y+dy[i];
			if(vis[xx][yy]&&!(xx==prevx&&yy==prevy)) {
				cout << "BUG" << endl; return 0;
			}
		}
		vis[x][y]=true;
	}
	cout << "OK" << endl;
	return 0;
}
