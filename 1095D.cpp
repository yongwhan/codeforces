#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=2e5+77;

vector<int> p;
map<int,vector<int>> adj;
vector<int> vis(mx,false);

bool equal(vector<int> &a, vector<int> &b) {
	int n=a.size();
	if(a.size()!=b.size()) return false;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	for (int i=0; i<n; i++)
		if(a[i]!=b[i])
			return false;
	return true;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;

	map<int,vector<int>> adj3;
	for (int i=0; i<n; i++) {
		int x,y; cin>>x>>y; x--; y--;
		if(x>y) swap(x,y);
		adj[x].push_back(y);
		adj[y].push_back(x);
		adj3[i].push_back(x);
		adj3[i].push_back(y);
	}

	vector<int> vis(n,false);
	stack<int> stk;
	stk.push(0);
	while(!stk.empty()) {
		int x=stk.top(); stk.pop();
		if(!vis[x]) vis[x]=true, p.push_back(x);
		for (int y : adj[x])
			if(!vis[y])
				stk.push(y);
	}

	map<int,vector<int>> adj2;
	for (int i=0; i<n; i++)
		adj2[p[i]].push_back(p[(i+1)%n]),
		adj2[p[i]].push_back(p[(i+2)%n]);

	if(!equal(adj3[0],adj2[0]))
		reverse(p.begin(), p.end());
	for (auto it : p)
		cout << it+1 << " ";
	cout << endl;
	return 0;
}
