#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	int n,m,k,s,a; scanf("%d %d %d %d", &n, &m, &k, &s);
	vector<queue<int>> v(k);
	vector<vector<int>> d(k, vector<int>(n,-1));
	vector<priority_queue<int,vector<int>,greater<int>>> u(n);
	for (int i=0; i<n; i++) {
		scanf("%d", &a); a--;
		v[a].push(i);
		d[a][i]=0;
	}

	vector<vector<int>> adj(n);
	for (int i=0; i<m; i++) {
		int x,y; scanf("%d %d", &x, &y); x--; y--;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	for (int i=0; i<k; i++) {
		while(!v[i].empty()) {
			int cur=v[i].front(); v[i].pop();
			u[cur].push(d[i][cur]);
			for (auto nxt : adj[cur]) {
				if(d[i][nxt]==-1) {
					d[i][nxt]=d[i][cur]+1; v[i].push(nxt);
				}
			}
		}
	}

	for (int i=0; i<n; i++) {
		if(i) printf(" ");
		int ret=0;
		for (int j=0; j<s; j++) {
			ret+=u[i].top(); u[i].pop();
		}
		printf("%d", ret);
	}
	printf("\n");
	return 0;
}
