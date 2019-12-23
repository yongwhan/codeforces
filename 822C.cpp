#include<bits/stdc++.h>
using namespace std;

const int inf=2e9+77;

// smallest key at least k
int lbd(map<int,int> &mp, int k) {
	auto it=mp.lower_bound(k);
	if(it==mp.end()) return -1;
	return it->first;
}

// greatest key at most k
int ubd(map<int,int> &mp, int k) {
	auto it=mp.upper_bound(k);
	if(it==mp.begin()) return -1;
	it--;
	return it->first;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x; cin>>n>>x;
	unordered_map<int, map<int,int>> mp, pre, suf;
	vector<int> l(n), r(n), cost(n);
	for (int i=0; i<n; i++) {
		cin>>l[i]>>r[i]>>cost[i];
		int key=r[i]-l[i]+1;
		if(mp[key].find(l[i])==mp[key].end()) mp[key][l[i]]=cost[i];
		else mp[key][l[i]]=min(mp[key][l[i]],cost[i]);
	}
	for (auto it : mp) {
		int cur=inf;
		for (auto it2 : it.second) cur=min(cur,it2.second), pre[it.first][it2.first]=cur;
		cur=inf;
		for (auto it2=it.second.rbegin(); it2!=it.second.rend(); it2++) cur=min(cur,it2->second), suf[it.first][it2->first]=cur;
	}

	int ret=inf;
	for (int i=0; i<n; i++) {
		int target=x-(r[i]-l[i]+1);
		if(target<1) continue;
		int u=ubd(pre[target],l[i]-x+1), l=lbd(suf[target],r[i]+1);
		if(u!=-1) ret=min(ret, cost[i]+pre[target][u]);
		if(l!=-1) ret=min(ret, cost[i]+suf[target][l]);
	}
	if(ret==inf) cout << -1 << endl;
	else cout << ret << endl;
	return 0;
}
