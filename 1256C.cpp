#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,d; cin>>n>>m>>d;
	vector<int> c(m);
	for (int i=0; i<m; i++)
		cin>>c[i];
	vector<int> suf(m,0);
	for (int i=1; i<m; i++)
		suf[i]=suf[i-1]+c[m-i];
	reverse(suf.begin(),suf.end());
	vector<int> ret(n,0);
	int cur=0;
	vector<int> pos(m);
	for (int i=0; i<m; i++) {
		cur=min(cur+d,n-suf[i]-c[i]+1);
		pos[i]=cur-1;
		cur+=c[i]-1;
	}
	cur=min(cur+d,n+1);
	if(cur<n+1) {
		cout<<"NO\n";
		return 0;
	}
	cout<<"YES\n";
	for (int i=0; i<m; i++)
		for (int j=0; j<c[i]; j++)
			ret[pos[i]+j]=i+1;
	for (int i=0; i<n; i++)
		cout<<ret[i]<<" ";
	cout<<endl;
	return 0;
}
