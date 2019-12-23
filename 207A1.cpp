#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<queue<ll>> lst(n);
	int tot=0;
	for (int i=0; i<n; i++) {
		ll k,a,x,y,m; cin>>k>>a>>x>>y>>m;
		tot+=k;
		while(k--)
			lst[i].push(a), a=(a*x+y)%m;
	}
	int ret=0, val=0;
	vector<ii> ans;
	while(tot--) {
		int mn=2e9, idx=-1, glob=2e9, rem=-1;
		for (int i=0; i<n; i++) {
			if(lst[i].empty())
				continue;
			int cur=lst[i].front();
			if(cur<glob)
				glob=cur, rem=i;
			if(val>cur)
				continue;
			if(cur<mn)
				mn=cur, idx=i;
		}
		if(idx!=-1) {
			val=lst[idx].front();
			ans.push_back({val,idx+1});
			lst[idx].pop();
			continue;
		}
		ret++;
		val=lst[rem].front();
		ans.push_back({val,rem+1});
		lst[rem].pop();
	}
	cout << ret << endl;
	for (auto it : ans)
		cout << it.first << " " << it.second << endl;
	return 0;
}
