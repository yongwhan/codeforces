#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int dx[4]={0,-1,0,1}, dy[4]={-1,0,1,0};
const int mx=1077;
int tot=0;
int s[17];
int ct[17];
int g[mx][mx];
int n,m;
queue<ii> q[17];

void go(int k) {
	if(q[k].empty())
		return;
	int sz=q[k].size();
	while(sz--) {
		auto[i, j]=q[k].front(); q[k].pop();
		for (int t=0; t<4; t++) {
			int x=i+dx[t], y=j+dy[t];
			if(x<0||x>=n||y<0||y>=m)
				continue;
			if(g[x][y])
				continue;
			q[k].push({x,y});
			g[x][y]=k;
			ct[k]++;
			tot--;
		}
	}
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int p; cin>>n>>m>>p;
	tot=n*m;
	for (int i=0; i<p; i++)
		cin>>s[i+1];
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++) {
			char ch; cin>>ch;
			if(ch=='.') g[i][j]=0;
			else if(ch=='#') g[i][j]=-1, tot--;
			else {
				int k=ch-'0';
				q[k].push({i,j});
				g[i][j]=k;
				ct[k]++;
				tot--;
			}
		}
	while(tot) {
		for (int i=1; i<=p; i++)
			for (int j=0; !q[i].empty() && j<s[i]; j++)
				go(i);
		bool done=true;
		for (int i=1; i<=9; i++)
			done&=q[i].empty();
		if(done)
			break;
	}
	for (int i=1; i<=p; i++)
		cout << ct[i] << " ";
	cout << endl;
	return 0;
}
