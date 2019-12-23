#include<bits/stdc++.h>
using namespace std;

const int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
const int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};
const int mx=50;

typedef pair<int,int> ii;

set<ii> cur;
int n, t[mx];

void eval(int dep, int dir, int x, int y) {
	if(dep==n) {
		cur.insert({x,y});
		return;
	}
	int xn=x+t[dep]*dx[dir], yn=y+t[dep]*dy[dir];
	eval(dep+1,(dir+1)%8,xn,yn);
	set<ii> nxt;
	for (auto p : cur)
		nxt.insert(p),
		nxt.insert({-(p.second-yn)+xn,(p.first-xn)+yn});
	for (int i=1; i<=t[dep]; i++)
		nxt.insert({x+i*dx[dir], y+i*dy[dir]});
	cur=nxt;
}


int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	for (int i=0; i<n; i++) cin>>t[i];
	eval(0,1,0,0);
	cout << cur.size() << endl;
	return 0;
}
