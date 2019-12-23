#include <bits/stdc++.h>
using namespace std;
int x[100001];
int main() {
	int q; cin>>q;
	while(q--) {
		int n,r; cin>>n>>r;
		for (int i=1; i<=n; i++)
			cin>>x[i];
		sort(x+1,x+n+1);
		n=unique(x+1,x+n+1)-x-1;
		int ret=n;
		for (int i=1; i<=n; i++)
			ret=min(ret, max(n-i,(x[i]-1)/r+1));
		cout<<ret<<endl;
	}
}
