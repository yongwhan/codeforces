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
	ll n; cin>>n;
	int u,v;
	vector< vector<int> > adj(n);
	for (int i=0; i<n-1; i++) {
		cin>>u>>v; u--; v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	vector<int> col(n,0);
	int a=0;
	queue<int> q; q.push(0);
	col[0]=1;
	while(!q.empty()) {
		int cur=q.front(); q.pop();
		if(col[cur]==1) a++;
		vector<int> nbr=adj[cur];
		for (int i=0; i<nbr.size(); i++) {
			int nxt=nbr[i];
			if(!col[nxt]) {
				col[nxt]=3-col[cur];
				q.push(nxt);
			}
		}
	}
	cout << (n-a)*a - (n-1) << endl;
	return 0;
}
