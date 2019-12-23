#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,a,b; cin>>n>>m;
	map<int,set<int>> adj,st;
	for (int i=0; i<m; i++)
		cin>>a>>b, a--, b--, adj[a].insert(b), adj[b].insert(a);
	set<int> open;
	for (int i=0; i<n; i++)
		open.insert(i);
	int iter=0;
	while(!open.empty()) {
		int cur=*open.begin(); open.erase(cur);
		st[iter].insert(cur);
		for (int i=0; i<n; i++)
			if(!adj[cur].count(i))
				st[iter].insert(i), open.erase(i);
		iter++;
	}

	if(iter!=3) {
		cout<<-1<<endl;
		return 0;
	}
	map<int,int> idx;
	for (int i=0; i<3; i++)
		for (const int &x : st[i])
			idx[x]=i;
	map<int,set<int>> nbr;
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			if(i==j) continue;
			for (const int &x : st[j])
				nbr[i].insert(x);
		}
	}

	for (int i=0; i<n; i++) {
		if(nbr[idx[i]]!=adj[i]) {
			cout<<-1<<endl;
			return 0;
		}
	}

	for (int i=0; i<n; i++)
		cout<<idx[i]+1<<" ";
	cout<<endl;
	return 0;
}
