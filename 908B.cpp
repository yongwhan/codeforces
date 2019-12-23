#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int dx[]={0,1,0,-1}, dy[]={1,0,-1,0};
const int mx=55;
char grid[mx][mx];
ii init, finish;
int n,m;
string instr;

ii eval(char ch) {
	map<char,int> mp;
	string dir="DLUR";
	int idx=-1;
	for (int i=0; i<4; i++)
		if(dir[i]==ch) idx=i;
	return {dx[idx], dy[idx]};
}

bool outside(ii cur) {
	int x=cur.first, y=cur.second;
	return (x<0)||(x>=n)||(y<0)||(y>=m);
}


bool ok(string &dir) {
	ii cur=init;
	map<char,char> mp;
	for (int i=0; i<4; i++)
		mp[i+'0']=dir[i];
	for (auto ch : instr) {
		ii inc=eval(mp[ch]);
		ii nxt=cur;
		nxt.first+=inc.first;
		nxt.second+=inc.second;
		if(nxt==finish)
			return true;
		if(outside(cur) || (grid[nxt.first][nxt.second]=='#'))
			return false;
		cur=nxt;
	}
	return false;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	cin>>n>>m;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++) {
			char ch;
			ii cur={i,j};
			cin>>ch;
			grid[i][j]=ch;
			if(ch=='S') init=cur;
			else if(ch=='E') finish=cur;
		}
	cin>>instr;

	int ret=0;
	string dir="DLUR";
	sort(dir.begin(),dir.end());
	do {
		if(ok(dir)) ret++;
	} while(next_permutation(dir.begin(),dir.end()));
	cout << ret << endl;
	return 0;
}
