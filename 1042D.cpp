#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<ll,ll> ii;

typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	ll t; cin>>t;
	vector<ll> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	vector<ll> pre(n);
	pre[0]=a[0];
	for (int i=1; i<n; i++)
		pre[i]=pre[i-1]+a[i];
	indexed_set s;
	for (int i=0; i<n; i++)
		s.insert({pre[i],i});
	ll ret=0;
	for (int i=0; i<n; i++) {
		ret+=s.order_of_key({t,0});
		t+=a[i];
		s.erase({pre[i],i});
	}
	cout<<ret<<"\n";
	return 0;
}
