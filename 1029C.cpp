#include<bits/stdc++.h>
using namespace std;

const int mx=7e5+77, inf=1e9+77;
vector<int> l(mx), r(mx);
vector<int> lpre(mx,0), lsuf(mx,0);
vector<int> rpre(mx,inf), rsuf(mx,inf);

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	for (int i=0; i<n; i++) cin>>l[i]>>r[i];
	for (int i=0; i<n; i++)
		lpre[i+1]=max(lpre[i],l[i]),
		rpre[i+1]=min(rpre[i],r[i]);
	for (int i=n-1; i>=0; i--)
		lsuf[i]=max(lsuf[i+1],l[i]),
		rsuf[i]=min(rsuf[i+1],r[i]);
	int ret=0;
	for (int i=0; i<n; i++)
		ret=max(ret,min(rpre[i],rsuf[i+1])-max(lpre[i],lsuf[i+1]));
	cout << ret << endl;
	return 0;
}
