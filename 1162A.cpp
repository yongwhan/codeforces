#include<bits/stdc++.h>
using namespace std;

int main() {
	map<int,int> mp;
	int n,h,m,l,r,x; cin>>n>>h>>m;
	for (int i=1; i<=n; i++)
		mp[i]=h;
	for (int i=0; i<m; i++) {
		cin>>l>>r>>x;
		for (int j=l; j<=r; j++)
			mp[j]=min(mp[j],x);
	}
	int ret=0;
	for (const auto it : mp)
		ret+=it.second*it.second;
	cout<<ret<<endl;
	return 0;
}
