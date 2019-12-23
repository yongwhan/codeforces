#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

string eval(string &s) {
	string ret=s;
	int n=s.size();
	for (int i=0; i<n; i++) {
		if(s[i]!='?')
			continue;
		set<char> st={'a', 'b', 'c'};
		for (int j=-1; j<=1; j++) {
			int cur=i+j;
			if(cur<0||cur>=n) continue;
			st.erase(ret[cur]);
		}
		ret[i]=*st.begin();
	}
	for (int i=0; i<n-1; i++)
		if(ret[i]==ret[i+1])
			return "";
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		string s; cin>>s;
		string ret=eval(s);
		if(ret.empty()) cout<<-1<<"\n";
		else cout<<ret<<"\n";
	}
	return 0;
}
