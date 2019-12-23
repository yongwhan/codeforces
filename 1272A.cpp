#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int q; cin>>q;
	while(q--) {
		vector<int> a(3);
		for (int i=0; i<3; i++)
			cin>>a[i];
		sort(a.begin(),a.end());
		cout<<max(0,a[2]-a[0]-2)*2<<"\n";
	}
	return 0;
}
