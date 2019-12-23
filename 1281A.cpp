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
		string s; cin>>s;
		if(s.substr(s.size()-2)=="po") cout<<"FILIPINO\n";
		else if(s.substr(s.size()-4)=="desu"||s.substr(s.size()-4)=="masu") cout<<"JAPANESE\n";
		else cout<<"KOREAN\n";
	}
	return 0;
}
