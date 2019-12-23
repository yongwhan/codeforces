#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<vector<int>> adj(n);
	for (int i=1; i<n; i++) {
		int j; cin>>j; j--;
		adj[i].push_back(j);
		adj[j].push_back(i);
	}

	vector<int> par(n,-1);
	set<int> vis; vis.insert(n-1);
	queue<int> q; q.push(n-1);
	while(!q.empty()) {
		int cur=q.front(); q.pop();
		for (int nxt : adj[cur]) {
			if(vis.find(nxt)!=vis.end())
				continue;
			par[nxt]=cur;
			vis.insert(nxt);
			q.push(nxt);
		}
	}
	int cur=0;
	while(cur!=-1)
		cout << cur+1 << " ",
		cur=par[cur];
	cout << endl;
	return 0;
}
