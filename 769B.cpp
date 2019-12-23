#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n), ok(n,false);
	for (int i=0; i<n; i++) cin>>a[i]; ok[0]=true;
	set<int> vis; vis.insert(0);
	vector<ii> ret;
	while(1) {
		bool up=false;
		int x=-1;
		for (int i=0; i<n; i++) {
			if(ok[i]&&a[i]) {
				x=i; break;
			}
		}
		if(x==-1)
			break;
		a[x]--;

		int y=-1, mx=-1;
		for (int i=0; i<n; i++)
			if(!ok[i])
				if(mx<a[i])
					mx=a[i], y=i;
		if(y==-1) break;
		ret.push_back({x+1,y+1});
		ok[y]=true;
		vis.insert(y);
	}
	if(vis.size()!=n) { cout << -1 << endl; return 0; }
	cout << ret.size() << endl;
	for (auto x : ret)
		cout << x.first << " " << x.second << endl;
	return 0;
}
