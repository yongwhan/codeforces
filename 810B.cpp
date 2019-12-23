#include<cstdio>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<sstream>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,f; cin>>n>>f;
	ll ret=0;
	vector<ll> v;
	for (int i=0; i<n; i++) {
		ll k,l; cin>>k>>l;
		ll x=min(k,l), y=min(2*k,l);
		ret+=x;
		v.push_back(y-x);
	}
	sort(v.begin(), v.end(), greater<ll>());
	for (int i=0; i<f; i++)
		ret+=v[i];
	cout << ret << endl;
	return 0;
}
