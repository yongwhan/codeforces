#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

string better(const string &s) {
	int n=s.size();
	string ret=s;
	map<char,int> last;
	for (int i=0; i<n; i++)
		last[s[i]]=i;
	for (int i=0; i<n; i++) {
		for (char ch='A'; ch<s[i]; ch++) {
			if(!last.count(ch))
				continue;
			if(last[ch]<=i)
				continue;
			swap(ret[i],ret[last[ch]]);
			return ret;
		}
	}
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		string s,t; cin>>s>>t;
		string ret=better(s);
		if(ret<t) cout<<ret<<"\n";
		else cout<<"---\n";
	}
	return 0;
}
