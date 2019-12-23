#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int n; cin>>n;
		vector<int> p(n);
		map<int,int> idx;
		for (int i=0; i<n; i++)
			cin>>p[i], idx[p[i]]=i;
		int mn=INT_MAX, mx=INT_MIN;
		string ret;
		for (int i=1; i<=n; i++) {
			mn=min(mn,idx[i]);
			mx=max(mx,idx[i]);
			if(mx-mn+1==i) ret+='1';
			else ret+='0';
		}
		cout<<ret<<"\n";
	}
	return 0;
}
