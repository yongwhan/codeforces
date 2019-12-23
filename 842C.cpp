#include<bits/stdc++.h>
using namespace std;

const int mx=2e5+5;
vector<int> a(mx,0), ret(mx,0);
vector<vector<int>> adj(mx);
typedef unordered_map<bool,unordered_set<int>> dat;
vector<dat> memo(mx);
int n;

int gcd(int a, int b) {
	if(!b) return a;
	else return gcd(b,a%b);
}

int getmax(int cur) {
	int ret=0;
	for (auto x : memo[cur])
		for (auto y : x.second)
			ret=max(ret,y);
	return ret;
}

void proc(int cur, int prev) {
	dat d=memo[prev];
	for (auto t : d[true])
		memo[cur][true].insert(gcd(t,a[cur]));
	for (auto t : d[false])
		memo[cur][false].insert(gcd(t,a[cur])),
		memo[cur][true].insert(t);
}

void eval(int cur, int prev) {
	ret[cur]=getmax(cur);
	for (auto nxt : adj[cur]) {
		if(nxt!=prev)
			proc(nxt,cur), eval(nxt,cur);
	}
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>a[i];
	for (int i=0; i<n-1; i++) {
		int x,y; cin>>x>>y; x--; y--;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memo[0][false].insert(a[0]);
	memo[0][true].insert(0);
	eval(0,-1);
	for (int i=0; i<n; i++) {
		if(i) cout << " ";
		cout << ret[i];
	}
	cout << endl;
	return 0;
}
