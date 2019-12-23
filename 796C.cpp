#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int eval(int n, map<int,vector<int>> &idx, vector<vector<int>> &adj, set<int> &value) {
	vector<int> v(value.begin(),value.end());
	sort(v.begin(),v.end(),greater<int>());
	if(v[0]>=v[1]+2) return v[0];

	// v[0] is v[1]+1
	set<int> st(idx[v[1]].begin(), idx[v[1]].end());
	vector<int> deg(n,0);
	for (auto x : idx[v[0]])
		for (auto y : adj[x])
			if(st.find(y)!=st.end())
				deg[x]++, deg[y]++;
	// all nodes with value v[1] is a neighbor to a node with value v[0]
	// in this case, v[0] wins
	if(deg[idx[v[0]][0]]==idx[v[1]].size())
		return v[0];

	// there is a node with value v[1] that is not a direct neighbor of a node with value v[0]
	// in this case, v[1]+2 wins
	return v[1]+2;
}


int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	map<int,vector<int>> idx;
	set<int> value;
	vector<vector<int>> adj(n);
	vector<int> val(n);
	int mx=-2e9;
	for (int i=0; i<n; i++) {
		cin>>val[i];
		idx[val[i]].push_back(i);
		mx=max(mx,val[i]);
		value.insert(val[i]);
	}
	int u,v;
	for (int i=0; i<n-1; i++) {
		cin>>u>>v;
		u--; v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	vector<int> cur=idx[mx];

	if(n==1) {
		cout << mx << endl;
		return 0;
	}

	if(cur.size()==1) {
		cout << eval(n,idx,adj,value) << endl;
		return 0;
	}

	set<int> st(cur.begin(),cur.end());
	int ret=mx;
	vector<int> deg(n,0);
	for (auto x : cur)
		for (auto y : adj[x])
			if(st.find(y)!=st.end())
				deg[x]++, deg[y]++;
	int sz=cur.size();	
	bool ok=false;
	for (auto t : deg)
		if(t==2*(sz-1))
			ok=true;

	for (int i=0; i<n; i++)
		deg[i]=0;

	bool ok2=false;
	for (int x=0; x<n; x++)
		if(st.find(x)==st.end())
			for (auto y : adj[x])
				if(st.find(y)!=st.end())
					deg[x]++, deg[y]++;
	for (auto t : deg)
		if(t==sz)
			ok2=true;
	if(ok||ok2) ret++;
	else ret+=2;
	cout << ret << endl;
	return 0;
}
