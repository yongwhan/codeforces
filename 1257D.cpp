#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t-->0) {
		int n; cin>>n;
		vector<int> a(n);
		for (int i=0; i<n; i++)
			cin>>a[i];
		int m; cin>>m;
		map<int,int> maxs;
		while(m-->0) {
			int p,s; cin>>p>>s;
			maxs[p]=max(maxs[p],s);
		}
		int cur=0;
		for (auto it=maxs.rbegin(); it!=maxs.rend(); it++) {
			cur=max(cur,it->second);
			maxs[it->first]=cur;
		}
		int ret=1,killed=0,init=0,mx=0;
		for (int i=0; i<n;) {
			mx=max(mx,a[i]);
			auto it=maxs.lower_bound(mx);
			if(it==maxs.end()) {
				ret=-1; break;
			}
			killed++; i++;
			if(killed>it->second) {
				ret++; init+=killed-1; killed=0; mx=0; i=init;
			}
		}
		if(ret==-1) cout<<-1<<"\n";
		else {
			cout<<ret<<"\n";
		}
	}
	return 0;
}
