#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

void print(set<ii> &adj) {
	for (auto e : adj)
		printf("%d %d\n", e.first+1, e.second+1);
}

int main() {
	int n,m,v; scanf("%d %d %d", &n, &m, &v);
	if(m<n-1) {
		printf("-1\n");
		return 0;
	}

	v--;
	set<ii> adj;
	for (int i=0; i<n; i++)
		if(v!=i) {
			ii e={v,i};
			if(e.first>e.second)
				swap(e.first, e.second);
			adj.insert(e);
		}
	if(adj.size()==m) {
		print(adj);
		return 0;
	}
	int w=0;
	if(w==v)
		w++;
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			if(i!=w&&j!=v) {
				adj.insert({i,j});
				if(adj.size()==m) {
					print(adj);
					return 0;
				}
			}
		}
	}
	printf("-1\n");
	return 0;
}
