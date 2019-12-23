#include <bits/stdc++.h>
using namespace std;

const int mx = 2e5+777;
int lst[mx],suf[mx],a[mx];
int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,q,cur=0,t,p,x; cin>>n;
	for (int i=1; i<=n; i++)
		cin>>a[i];
	cin>>q;
	while(q--) {
		cin>>t;
		if(t==1) cin>>p>>x, lst[p]=cur, a[p]=x;
		else cin>>x, suf[++cur]=x;
	}
	for (int i=cur-1; i>0; i--)
		suf[i]=max(suf[i+1],suf[i]);
	for (int i=1; i<=n; i++)
		cout<<max(suf[lst[i]+1],a[i])<<" ";
	cout<<"\n";
	return 0;
}
