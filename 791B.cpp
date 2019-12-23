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
	int n,m; cin>>n>>m;
	ll ret=0;
	map<int, vector<int> > adj;
	for (int i=0; i<m; i++) {
		int a,b; cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	set<int> vis;
	for (int i=1; i<=n; i++) {
		if(vis.find(i)==vis.end()) {
			ll ct=0;
			vis.insert(i);
			queue<int> q; q.push(i); ct++;
			while(!q.empty()) {
				int cur=q.front(); q.pop();
				vector<int> nbr=adj[cur];
				int sz=nbr.size();
				for (int j=0; j<sz; j++) {
					int nxt=nbr[j];
					if(vis.find(nxt)==vis.end()) {
						vis.insert(nxt);
						q.push(nxt);
						ct++;
					}
				}
			}
			ret+=ct*(ct-1)/2;
		}
	}
	if(ret==m) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
