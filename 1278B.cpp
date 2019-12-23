#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

const int inf=1e9+7;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		ll a,b,d; cin>>a>>b;
		d=abs(a-b);
		ll cur=0;
		ll ret=-1;
		for (ll i=0; i<=inf; i++) {
			cur+=i;
			if(d<=cur&&(cur-d)%2==0) {
				ret=i;
				break;
			}
		}
		cout<<ret<<"\n";
	}
	return 0;
}
