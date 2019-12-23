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
		string s; cin>>s;
		map<char,int> ct;
		for (char ch : s)
			ct[ch]++;
		int x=min(ct['U'],ct['D']), y=min(ct['R'],ct['L']);
		if(!x) y=min(y,1);
		if(!y) x=min(x,1);

		cout<<2*(x+y)<<"\n";
		cout<<string(x,'U')<<string(y,'R')<<string(x,'D')<<string(y,'L')<<"\n";
	}
	return 0;
}
