#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
int dx[]={1,0,-1,0}, dy[]={0,1,0,-1};
const int mx=2077;
int dist[mx][mx];

int main() {
	for (int i=0; i<mx; i++)
		for (int j=0; j<mx; j++)
			dist[i][j]=-1;

	ifstream fin("input.txt");
	ofstream fout("output.txt");
	int n,m,k; fin>>n>>m>>k;
	queue<ii> q;
	for (int i=0; i<k; i++) {
		int x,y; fin>>x>>y;
		ii p={x,y};
		q.push(p);
		dist[x][y]=0;
	}
	int mx=-1, X=-1, Y=-1;
	while(!q.empty()) {
		ii cur=q.front(); q.pop();
		int d=dist[cur.first][cur.second];
		if(mx<d)
			mx=d, X=cur.first, Y=cur.second;
		for (int i=0; i<4; i++) {
			ii nxt=cur; nxt.first+=dx[i]; nxt.second+=dy[i];
			if(nxt.first<1||nxt.first>n||nxt.second<1||nxt.second>m)
				continue;
			if(dist[nxt.first][nxt.second]!=-1)
				continue;
			dist[nxt.first][nxt.second]=dist[cur.first][cur.second]+1;
			q.push(nxt);
		}
	}

	fout << X << " " << Y << endl;
	return 0;
}
