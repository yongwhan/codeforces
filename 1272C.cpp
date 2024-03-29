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
	set<char> st;
	for (int i=0; i<k; i++) {
		char ch; cin>>ch;
		st.insert(ch);
	}
	for (int i=0; i<n; i++)
		if(!st.count(s[i]))
			s[i]=' ';
	ll ret=0;
	stringstream ss(s);
	string cur;
	while(ss>>cur) {
		ll sz=cur.size();
		ret+=sz*(sz+1)/2;
	}
	cout<<ret<<"\n";
	return 0;
}
