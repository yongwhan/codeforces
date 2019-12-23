#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int eval(vector<int> &a) {
	sort(a.begin(),a.end());
	int first=min(a[0]+a[1],a[2]);
	int dif=max(0,a[0]+a[1]-a[2]);
	first+=dif/2;

	int unif=a[0]/2;
	int second=unif*3;
	a[0]-=2*unif; a[1]-=2*unif; a[2]-=2*unif;
	second+=min(a[0]+a[1],a[2]);
	return max(first,second);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		vector<int> a(3);
		for (int i=0; i<3; i++)
			cin>>a[i];
		sort(a.begin(),a.end());
		cout<<eval(a)<<"\n";
	}
	return 0;
}
