#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

const string RGB="RGB";

int eval(int n, int k, string &s, int j) {
	vector<int> cum(n+1,0);
	for (int i=0; i<n; i++) {
		cum[i+1]=cum[i];
		if(s[i]!=RGB[j]) cum[i+1]++;
		j=(j+1)%3;
	}

	int ret=INT_MAX;
	for (int i=k; i<=n; i++)
		ret=min(ret,cum[i]-cum[i-k]);
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int q; cin>>q;
	while(q--) {
		int n,k; cin>>n>>k;
		string s; cin>>s;
		int ret=INT_MAX;
		for (int i=0; i<3; i++)
			ret=min(ret,eval(n,k,s,i));
		cout<<ret<<"\n";
	}
	return 0;
}
