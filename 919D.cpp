#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=3e5+77;
vector<vector<int>> adj(mx);
vector<int> indeg(mx,0), outdeg(mx,0);
vector<bool> vis(mx,false), rec(mx,false);
vector<vector<int>> dp(30,vector<int>(mx,-1));
string s;
int n;

bool detect(int cur) {
	if(!vis[cur]) {
		vis[cur]=true; rec[cur]=true;
		for (auto nxt : adj[cur]) {
			if(!vis[nxt]&&detect(nxt)) return true;
			else if(rec[nxt]) return true;
		}
	}
	rec[cur]=false;
	return false;
}

bool hasCycle() {
	for (int i=0; i<n; i++) if(detect(i)) return true;
	return false;
}

int eval(int cur, char ch) {
	int has=int(s[cur]==ch);
	if(!outdeg[cur]) return has;
	if(dp[ch-'a'][cur]!=-1) return dp[ch-'a'][cur];
	int ret=0;
	for (auto nxt : adj[cur]) ret=max(ret,has+eval(nxt,ch));
	return dp[ch-'a'][cur]=ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int m,x,y,ret=0; cin>>n>>m;
	cin>>s;
	for (int i=0; i<m; i++) cin>>x>>y, x--, y--, adj[x].push_back(y), indeg[y]++, outdeg[x]++;
	if(hasCycle()) { cout << -1 << endl; return 0; }
	for (int i=0; i<n; i++) if(!indeg[i]) for (char ch='a'; ch<='z'; ch++) ret=max(ret,eval(i,ch));
	cout << ret << endl;
	return 0;
}
