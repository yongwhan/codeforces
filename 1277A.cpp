#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<ll> cand;
	for (int d=1; d<=9; d++) {
		ll cur=0;
		for (int i=0; i<10; i++)
			cur=10*cur+d,
			cand.push_back(cur);
	}

	int t; cin>>t;
	while(t--) {
		int n; cin>>n;
		int ret=0;
		for (auto x : cand)
			if(x<=n)
				ret++;
		cout<<ret<<"\n";
	}
	return 0;
}
