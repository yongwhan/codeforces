#include<bits/stdc++.h>
using namespace std;

const int mx=2e5+77;

vector<int> lst;
map<int,int> idx;
map<int,int> sz;
vector<vector<int>> adj(mx);
vector<bool> vis(mx,false);

void doit(int cur) {
	lst.push_back(cur);
	vis[cur]=true;
	for (auto nxt : adj[cur])
		if(!vis[nxt]) {
			doit(nxt);
		}
}

int getsize(int cur, int prev) {
	int sum=1;
	for (auto nxt : adj[cur])
		if(nxt!=prev)
			sum+=getsize(nxt, cur);
	sz[cur]=sum;
	return sum;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,q,x; cin>>n>>q;
	for (int i=1; i<n; i++) {
		cin>>x; x--;
		adj[x].push_back(i); adj[i].push_back(x);
	}
	vis[0]=true;
	doit(0);
	getsize(0, -1);

	int ct=0;
	for (auto it: lst)
		idx[it]=ct++;

	for (int i=0; i<q; i++) {
		int u,k; cin>>u>>k; u--; k--;
		if(k>=sz[u]) cout << -1 << endl;
		else cout << lst[idx[u]+k]+1 << endl;
	}
	return 0;
}
