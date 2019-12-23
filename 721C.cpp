#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
const int mx=5077, inf=1e9+77;
vector<vector<ii>> adj(mx);
int par[mx][mx], T;
vector<vector<int>> dp(mx, vector<int>(mx,-1));

int eval(int cur, int len) {
	if(len<0) return inf;
	if(!cur) {
		if(len) return inf;
		else return 0;
	}
	if(dp[cur][len]!=-1) return dp[cur][len];
	int val=inf;
	for (auto nxt : adj[cur]) {
		int tmp=nxt.second+eval(nxt.first,len-1);
		if(tmp<val&&tmp<=T) val=tmp, par[cur][len]=nxt.first;
	}
	return dp[cur][len]=val;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,best=0,u,v,t,cur; cin>>n>>m>>T;
	for (int i=0; i<m; i++) cin>>u>>v>>t, u--, v--, adj[v].push_back({u,t});
	dp[0][0]=0;
	for (int i=1; i<mx; i++) if(eval(n-1,i)<=T) best=max(best,i);
	vector<int> ret; cur=n-1;
	while(1) {
		ret.push_back(cur);
		if(!cur) break;
		cur=par[cur][best--];
	}
	cout << ret.size() << endl;
	reverse(ret.begin(),ret.end());
	for (auto e : ret)
		cout << e+1 << " ";
	cout << endl;
	return 0;
}
