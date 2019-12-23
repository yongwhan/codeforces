#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>m>>n;
	if(n==1&&m==1) {
		cout<<0<<"\n";
		return 0;
	}
	if(n==1) {
		for (int i=2; i<=m+1; i++)
			cout<<i<<" ";
		cout<<"\n";
		return 0;
	}

	if(m==1) {
		for (int i=2; i<=n+1; i++)
			cout<<i<<"\n";
		return 0;
	}


	for (int i=1; i<=m; i++) {
		for (int j=m+1; j<=n+m; j++)
			cout<<i*j<<" ";
		cout<<"\n";
	}
	return 0;
}
