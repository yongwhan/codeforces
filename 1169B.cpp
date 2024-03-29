#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool check(int x, vector<ii> &e, int m) {
	map<int,int> ct;
	int eq=0;
	for (int i=0; i<m; i++) {
		if(e[i].first==x||e[i].second==x) eq++;
		else {
			ct[e[i].first]++;
			ct[e[i].second]++;
		}
	}

	int mx=0;
	for (auto it : ct)
		mx=max(mx,it.second);
	return eq+mx==m;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	vector<ii> e(m);
	for (int i=0; i<m; i++)
		cin>>e[i].first>>e[i].second;

	cout << (check(e[0].first,e,m)||check(e[0].second,e,m) ? "YES" : "NO") << endl;
	return 0;
}
