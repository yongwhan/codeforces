#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef tuple<ll,int,int> iii;
const ll MAX_V=3e5+777, INF=1e15;
int V;

vector<iii> adj[MAX_V];
bool blah[MAX_V];

void dijkstra(int k) {
	priority_queue<iii> pq;
	pq.emplace(0,0,0);
	vector<int> ret;
	while(!pq.empty() && ret.size()<k) {
		ll cw; int cn,ce;
		tie(cw,cn,ce)=pq.top();
		pq.pop();
		if(blah[cn]) continue;
		if(ce) ret.push_back(ce);
		blah[cn]=true;
		for (const auto & x : adj[cn]) {
			ll nw; int nn, ne;
			tie(nw,nn,ne)=x;
			pq.emplace(nw+cw,nn,ne);
		}
	}
	cout<<ret.size()<<endl;
	for (const auto &x : ret)
		cout<<x<<" ";
	cout<<endl;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int m,k; cin>>V>>m>>k;
	for (int i=0; i<m; i++) {
		ll x,y,w; cin>>x>>y>>w; x--; y--;
		adj[x].emplace_back(-w,y,i+1);
		adj[y].emplace_back(-w,x,i+1);
	}
	dijkstra(k);
	return 0;
}
