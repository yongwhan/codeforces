#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n), d(n);
	for (int i=0; i<n; i++)
		cin>>a[i], a[i]--;
	for (int i=0; i<n; i++)
		cin>>d[i];
	vector<vector<int>> adj(n);
	for (int i=0; i<n; i++) {
		for (int j=-1; j<=1; j++) {
			int k=i+j*d[i];
			if(0<=k&&k<n)
				adj[i].push_back(k),
				adj[k].push_back(i);
		}
	}
	
	vector<int> ret(n);
	set<int> vis;
	for (int i=0; i<n; i++) {
		if(vis.find(i)!=vis.end())
			continue;
		vis.insert(i);
		queue<int> q; q.push(i);
		vector<int> cpt;
		while(!q.empty()) {
			int cur=q.front(); q.pop();
			cpt.push_back(cur);
			for (int nxt : adj[cur]) {
				if(vis.find(nxt)!=vis.end())
					continue;
				vis.insert(nxt);
				q.push(nxt);
			}
		}
		vector<int> tmp;
		for (int idx : cpt)
			tmp.push_back(a[idx]);
		sort(cpt.begin(), cpt.end());
		sort(tmp.begin(), tmp.end());
		for (int i=0; i<cpt.size(); i++)
			ret[cpt[i]]=tmp[i];
	}

	for (int i=0; i<n; i++)
		if(ret[i]!=i) {
			cout << "NO" << endl;
			return 0;
		}
	cout << "YES" << endl;
	return 0;
}
