#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;


typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	string s; cin>>s;
	if(n==1) {
		if(k>=1) cout<<0<<"\n";
		else cout<<s<<"\n";
		return 0;
	}
	if(!k) {
		cout<<s<<"\n";
		return 0;
	}
	if(s[0]!='1') s[0]='1', k--;
	for (int i=1; i<n; i++)
		if(s[i]!='0' && k)
			s[i]='0', k--;
	cout<<s<<"\n";
	return 0;
}
