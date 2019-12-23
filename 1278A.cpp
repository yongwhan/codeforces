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
		string s,t; cin>>s>>t;
		sort(s.begin(),s.end());
		int n=s.size(), m=t.size();
		bool ok=false;
		for (int i=0; i<=m-n; i++) {
			string u=t.substr(i,n);
			sort(u.begin(), u.end());
			if(s==u) ok=true;
		}
		cout<<(ok?"YES":"NO")<<"\n";
	}
	return 0;
}
