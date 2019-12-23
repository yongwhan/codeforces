#include<bits/stdc++.h>
using namespace std;

const int mx=1e5+777;
map<int,multiset<int>> adj;
vector<int> ret,odd;
int b[mx], c[mx];

void fail() {
	printf("-1\n");
	exit(0);
}

void dfs(int cur) {
	while(adj[cur].size()) {
		int nxt=*adj[cur].begin();
		adj[cur].erase(adj[cur].begin());
		adj[nxt].erase(adj[nxt].find(cur));
		dfs(nxt);
	}
	ret.push_back(cur);
}

int main() {
	int n; scanf("%d", &n);
	for (int i=0; i<n-1; i++) scanf("%d", &b[i]);
	for (int i=0; i<n-1; i++) scanf("%d", &c[i]);
	for (int i=0; i<n-1; i++) {
		if(b[i]>c[i]) fail();
		adj[b[i]].insert(c[i]);
		adj[c[i]].insert(b[i]);
	}
	for (auto it : adj)
		if(it.second.size()%2)
			odd.push_back(it.first);
	if(odd.size()>2) fail();
	dfs(odd.empty() ? adj.begin()->first : odd[0]);
	if(ret.size()!=n) fail();
	for (auto x : ret)
		printf("%d ", x);
	printf("\n");
	return 0;
}
