#include<cstdio>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<sstream>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	ll ret=0;
	vector<vector<int> > adj(n);
	vector<int> c(n);
	for (int i=0; i<n; i++) cin>>c[i];
	for (int i=0; i<m; i++) {
		int x,y; cin>>x>>y; x--; y--;
		adj[x].push_back(y);
		adj[y].push_back(x); 
	}

	set<int> vis;
	for (int i=0; i<n; i++) {
		if(vis.find(i)==vis.end()) {
			vis.insert(i);
			queue<int> q; q.push(i);
			int gold=2e9;
			while(!q.empty()) {
				int cur=q.front(); q.pop();
				gold=min(gold,c[cur]);
				int sz=adj[cur].size();
				for (int j=0; j<sz; j++) {
					int nxt=adj[cur][j];
					if(vis.find(nxt)==vis.end()) {
						vis.insert(nxt);
						q.push(nxt);
					}
				}
			}
			ret+=gold;
		}
	}
	cout << ret << endl;
	return 0;
}
