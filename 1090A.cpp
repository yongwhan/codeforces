#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	map<int,vector<ll>> mp;
	ll n,x,mx=0; cin>>n;
	for (int i=0; i<n; i++) {
		int m; cin>>m;
		for (int j=0; j<m; j++) {
			cin>>x, mp[i].push_back(x);
			mx=max(mx,x);
		}
	}
	ll ret=0;
	for (int i=0; i<n; i++)
		ret+=(mx-*max_element(mp[i].begin(), mp[i].end()))*mp[i].size();
	cout << ret << endl;
	return 0;
}
