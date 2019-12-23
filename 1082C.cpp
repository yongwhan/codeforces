#include<bits/stdc++.h>
using namespace std;

const int mx=1e5+77;
vector<priority_queue<int>> q(mx);
vector<int> a(mx,0);

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,s,r,ret=0; cin>>n>>m;
	for (int i=1; i<=n; i++)
		cin>>s>>r, q[s].push(r);
	for (int i=1; i<=m; i++) {
		int h=0, cur=0;
		while(!q[i].empty()) {
			cur+=q[i].top();
			if(cur<0) break;
			a[++h]+=cur, ret=max(ret,a[h]), q[i].pop();
		}
	}
	cout << ret << endl;
	return 0;
}
