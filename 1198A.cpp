#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;


typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,I; cin>>n>>I;
	int k=8*I/n;
	if(k>25) {
		cout<<0<<"\n";
		return 0;
	}
	int K=1<<k;
	map<int,int> mp;
	for (int i=0; i<n; i++) {
		int a; cin>>a; mp[a]++;
	}

	vector<int> a;
	for (auto it : mp)
		a.push_back(it.second);
	int m=a.size();
	if(m<=K) {
		cout<<0<<"\n";
		return 0;
	}

	vector<int> pre(m+1,0);
	for (int i=1; i<=m; i++)
		pre[i]=pre[i-1]+a[i-1];
	int ret=INT_MAX;
	for (int i=K; i<=m; i++)
		ret=min(ret,n-(pre[i]-pre[i-K]));
	cout<<ret<<"\n";
	return 0;
}
