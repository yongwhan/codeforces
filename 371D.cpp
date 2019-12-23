#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,type,p,x,k; cin>>n;
	vector<int> cap(n), val(n,0);
	for (int i=0; i<n; i++) cin>>cap[i];
	set<int> not_full;
	for (int i=0; i<n; i++) not_full.insert(i);
	cin>>m;
	while(m--) {
		cin>>type;
		if(type==1) {
			cin>>p>>x; p--;
			int cur=p;
			while(x) {
				auto it=not_full.lower_bound(cur);
				if(it==not_full.end()) break;
				cur=*it;
				if(cap[cur]>=val[cur]+x) {
					val[cur]+=x; break;
				} else {
					x-=cap[cur]-val[cur];
					val[cur]=cap[cur];
					not_full.erase(cur);
				}
			}
		} else cin>>k, cout<<val[k-1]<<endl;
	}
	return 0;
}
