#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> ii;

const int lim=2e5+50;
const ll inf=1e15;
ll ret=-inf;
int n;
vector<ll> a(lim,0), sum(lim,0),  mx(lim,0);
vector<vector<int>> adj(lim);

void evalmx(int cur, int par) {
	sum[cur]=a[cur], mx[cur]=-inf;
	for (auto nxt : adj[cur]) {
		if(nxt==par) continue;
		evalmx(nxt,cur);
		sum[cur]+=sum[nxt], mx[cur]=max(mx[cur],mx[nxt]);
	}
	mx[cur]=max(mx[cur],sum[cur]);
}

void eval(int cur, int par, ll val) {
	if(val!=-inf) ret=max(ret,sum[cur]+val);
	vector<ii> mn;
	for (auto nxt : adj[cur]) {
		if(nxt==par) continue;
		mn.push_back({mx[nxt],nxt});
		sort(mn.rbegin(),mn.rend());
		if(mn.size()==3) mn.pop_back();
	}
	mn.push_back({-inf,-1});
	for (auto nxt : adj[cur]) {
		if(nxt==par) continue;
		eval(nxt,cur,max(val,mn[0].second==nxt ? mn[1].first : mn[0].first));
	}
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<n-1; i++) {
		int x,y; cin>>x>>y; x--; y--;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	evalmx(0,-1);
	eval(0,-1,-inf);
	if(ret==-inf) cout << "Impossible" << endl;
	else cout << ret << endl;
	return 0;
}
