#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,s; cin>>n>>s;
	vector<ll> v(n);
	ll total=0, min_v=2e9;
	for (int i=0; i<n; i++) {
		cin>>v[i];
		total+=v[i];
		min_v=min(min_v,v[i]);
	}

	ll extra=0;
	for (int i=0; i<n; i++)
		extra+=v[i]-min_v;
	if(s>total) { cout << -1 << endl; return 0; }
	if(s<=extra) { cout << min_v << endl; return 0; }
	s-=extra;
	cout << min_v - (s+n-1)/n << endl;
	return 0;
}
