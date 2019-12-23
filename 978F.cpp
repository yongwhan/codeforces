#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	vector<int> r(n);
	for (int i=0; i<n; i++) cin>>r[i];
	map<int,int> pre, ct;
	for (auto it : r)
		ct[it]++;
	int cur=0;
	for (auto it : ct)
		cur+=it.second, pre[it.first]=cur;
	vector<int> ret(n);
	for (int i=0; i<n; i++)
		ret[i]=pre[r[i]]-ct[r[i]];
	int x,y;
	for (int i=0; i<k; i++) {
		cin>>x>>y; x--; y--;
		int u=r[x], v=r[y];
		if(u>v) ret[x]--;
		else if(u<v) ret[y]--;
	}
	for (int i=0; i<n; i++) {
		if(i) cout << " ";
		cout << ret[i];
	}
	cout << endl;
	return 0;
}
