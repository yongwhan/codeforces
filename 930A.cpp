#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x; cin>>n;
	vector<vector<int>> adj(n);
	for (int i=1; i<n; i++)
		cin>>x, x--,
		adj[x].push_back(i),
		adj[i].push_back(x);
	queue<int> q; q.push(0);
	map<int,int> depth, count;
	depth[0]=0; count[0]++;
	while(!q.empty()) {
		int cur=q.front(); q.pop();
		for (auto nxt : adj[cur])
			if(depth.find(nxt)==depth.end())
				depth[nxt]=depth[cur]+1,
				count[depth[nxt]]++,
				q.push(nxt);
	}
	int ret=0;
	for (auto it : count)
		ret+=it.second%2;
	cout << ret << endl;
	return 0;
}
