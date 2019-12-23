#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,M; cin>>n>>M;
	map<int,int> ct;
	for (int i=0; i<n; i++) {
		int t; cin>>t;
		int left=M-t, ret=i;
		for (int j=1; j<=100; j++) {
			int cur=min(left/j, ct[j]);
			left-=j*cur;
			ret-=cur;
		}
		cout<<ret<<" ";
		ct[t]++;
	}
	cout<<"\n";
	return 0;
}
