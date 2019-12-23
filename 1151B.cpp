#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	int a[n][m];
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			cin>>a[i][j];
	int cur=0;
	for (int i=0; i<n; i++)
		cur^=a[i][0];
	if(cur) {
		cout<<"TAK\n";
		for (int i=0; i<n; i++)
			cout<<"1 ";
		cout<<"\n";
		return 0;
	}
	cur=-1;
	int ret=-1;
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			if(a[i][0]!=a[i][j]) {
				cur=i, ret=j;
			}
		}
	}
	if(cur==-1) {
		cout<<"NIE\n";
		return 0;
	}
	cout<<"TAK\n";
	for (int i=0; i<n; i++)
		if(i!=cur) cout<<"1 ";
		else cout<<ret+1<<" ";
	cout<<"\n";
	return 0;
}
