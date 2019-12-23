#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int get_next(int cur, int n) {
	int low=cur, high=n, mid=-1;
	int val=n/cur;
	while(low<high) {
		mid=(low+high+1)/2;
		if(n/mid==val) low=mid;
		else high=mid-1;
	}
	return low+1;
}

void doit(int n) {
	vector<int> ret;
	int cur=1;
	ret.push_back(n/cur);
	while(cur<=n) {
		cur=get_next(cur,n);
		ret.push_back(n/cur);
	}
	sort(ret.begin(),ret.end());
	cout<<ret.size()<<"\n";
	for (auto x : ret)
		cout<<x<<" ";
	cout<<"\n";
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int n; cin>>n;
		doit(n);
	}
	return 0;
}
