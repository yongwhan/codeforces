#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=3e5+777;
vector<vector<int>> adj(mx);
ll n;
set<int> mark;

vector<int> eval(int x) {
	vector<int> dist(n,-1);
	dist[x]=0;
	queue<int> q; q.push(x);
	while(!q.empty()) {
		int cur=q.front(); q.pop();
		for (auto nxt : adj[cur])
			if(dist[nxt]==-1)
				dist[nxt]=dist[cur]+1,
				q.push(nxt);
	}
	return dist;
}

int get_size(int x) {
	queue<int> q; q.push(x);
	int ret=1;
	while(!q.empty()) {
		int cur=q.front(); q.pop();
		for (auto nxt : adj[cur])
			if(mark.find(nxt)==mark.end())
				mark.insert(nxt), ret++, q.push(nxt);
	}
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll x,y; cin>>n>>x>>y; x--; y--;
	for (int i=0; i<n-1; i++) {
		int a,b; cin>>a>>b; a--; b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	map<int,vector<int>> dist;
	dist[x]=eval(x);
	dist[y]=eval(y);
	for (int i=0; i<n; i++)
		if(dist[x][y]==dist[x][i]+dist[y][i])
			mark.insert(i);
	ll X=get_size(x), Y=get_size(y);
	cout << n*(n-1) - X*Y << endl;
	return 0;
}
