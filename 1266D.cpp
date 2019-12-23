#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,ll> ii;
typedef tuple<int,int,ll> tp;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	vector<ll> x(n,0);
	for (int i=0; i<m; i++) {
		int u,v,d; cin>>u>>v>>d; u--; v--;
		x[u]+=d;
		x[v]-=d;
	}

	queue<ii> p,q;
	for (int i=0; i<n; i++)
		if(x[i]>0)
			p.push({i,x[i]});
		else if(x[i]<0)
			q.push({i,-x[i]});

	vector<tp> ret;
	while(!p.empty()&&!q.empty()) {
		auto u=p.front(), v=q.front(); p.pop(); q.pop();
		if(u.second>v.second) {
			ret.push_back(make_tuple(u.first+1,v.first+1,v.second));
			p.push({u.first,u.second-v.second});
		} else {
			ret.push_back(make_tuple(u.first+1,v.first+1,u.second));
			if(u.second<v.second)
				q.push({v.first,v.second-u.second});
		}
	}

	cout<<ret.size()<<"\n";
	for (auto it : ret)
		cout<<get<0>(it)<<" "<<get<1>(it)<<" "<<get<2>(it)<<"\n";
	return 0;
}
