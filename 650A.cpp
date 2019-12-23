#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n; cin>>n;
	map<int,ll> mp_x, mp_y;
	map<ii,ll> mp;

	for (int i=0; i<n; i++) {
		int a,b; cin>>a>>b;
		mp_x[a]++;
		mp_y[b]++;
		mp[make_pair(a,b)]++;
	}

	ll ret=0;
	for(map<int,ll>::iterator it=mp_x.begin(); it!=mp_x.end(); it++) {
		ll cur=(*it).second;
		ret+=cur*(cur-1)/2;
	}

	for(map<int,ll>::iterator it=mp_y.begin(); it!=mp_y.end(); it++) {
		ll cur=(*it).second;
		ret+=cur*(cur-1)/2;
	}

	for(map<ii,ll>::iterator it=mp.begin(); it!=mp.end(); it++) {
		ll cur=(*it).second;
		ret-=cur*(cur-1)/2;
	}

	cout << ret << endl;
	return 0;
}
