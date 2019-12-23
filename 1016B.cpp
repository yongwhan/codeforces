#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,q; cin>>n>>m>>q;
	string s,t; cin>>s>>t;
	map<int,int> cum;
	for (int i=0; i<=n-m; i++)
		if(s.substr(i,m)==t)
			cum[i+1]=1;
	for (int i=1; i<=n; i++)
		cum[i]+=cum[i-1];
	int l,r;
	while(q--)
		cin>>l>>r, cout<<max(0,cum[r-m+1]-cum[l-1])<<"\n";
	return 0;
}
