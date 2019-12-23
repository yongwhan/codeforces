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
		int n; cin>>n;
		vector<int> a(n), b(n);
		for (int i=0; i<n; i++)
			cin>>a[n-1-i];
		for (int i=0; i<n; i++)
			cin>>b[i];
		map<int,int> sa, sb;
		sa[n]=0; sb[n]=0;
		int cur=0;
		for (int i=0; i<n; i++)
			if(a[i]==1) cur++;
			else cur--;

		for (int i=0; i<n; i++) {
			sa[i]=cur;
			if(a[i]==1) cur--;
			else cur++;
		}

		cur=0;
		for (int i=0; i<n; i++)
			if(b[i]==1) cur++;
			else cur--;

		for (int i=0; i<n; i++) {
			sb[i]=cur;
			if(b[i]==1) cur--;
			else cur++;
		}

		map<int,int> fa, fb;
		for (int i=0; i<=n; i++) {
			int diff=sa[i];
			if(!fa.count(diff))
				fa[diff]=i;
		}
		for (int i=0; i<=n; i++) {
			int diff=sb[i];
			if(!fb.count(diff))
				fb[diff]=i;
		}

		int ret=INT_MAX;
		for (int i=0; i<=n; i++) {
			int look=-sa[i];
			if(!fb.count(look)) continue;
			ret=min(ret,i+fb[look]);
		}
		cout<<ret<<"\n";
	}
	return 0;
}
