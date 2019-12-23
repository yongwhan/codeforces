#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,a,x,m,b,y;
	cin>>n;
	map<int,ll> mp;
	for (int i=0; i<n; i++)
		cin>>a>>x, mp[a]=x;
	cin>>m;
	for (int i=0; i<m; i++)
		cin>>b>>y, mp[b]=max(mp[b],y);
	ll ret=0;
	for (auto it : mp)
		ret+=it.second;
	cout << ret << endl;
	return 0;
}
