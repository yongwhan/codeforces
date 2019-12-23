#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

const int mod=1e9+7;

void eval(string &s, int l) {
	int paste=s[l-1]-'0';
	string c=s.substr(l);
	while(paste-->1)
		s+=c;
}

string doit(const string &s, int x) {
	string t=s;
	int l=0;
	while(t.size()<x) {
		l++;
		eval(t,l);
	}
	return t;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int x; cin>>x;
		string s; cin>>s;
		string t=doit(s,x);
		ll ret=s.size();
		for (int i=0; i<x; i++) {
			ll left=i+1, right=(ret-left+mod)%mod;
			ret=(left+right*(t[i]-'0'))%mod;
		}
		cout<<ret<<"\n";
	}
	return 0;
}
