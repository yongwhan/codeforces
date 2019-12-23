#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	map<int,int> a,pre,suf;
	for (int i=0; i<n; i++)
		cin>>a[i];
	pre[0]=1;
	for (int i=1; i<n; i++)
		if(a[i]>a[i-1]) pre[i]=pre[i-1]+1;
		else pre[i]=1;

	suf[n-1]=1;
	for (int i=n-2; i>=0; i--)
		if(a[i]<a[i+1]) suf[i]=suf[i+1]+1;
		else suf[i]=1;
	int ret=0;
	for (auto it : suf)
		ret=max(ret,it.second);
	for (int i=0; i<n; i++)
		if(a[i-1]<a[i+1])
			ret=max(ret,pre[i-1]+suf[i+1]);
	cout<<ret<<"\n";
	return 0;
}
