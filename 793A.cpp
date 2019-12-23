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
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,k; cin>>n>>k;
	ll ret=0;
	vector<ll> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	sort(a.begin(), a.end());

	for (int i=0; i<n; i++) {
		ll cur=a[i]-a[0];
		if(cur%k) {
			cout << -1 << endl; return 0;
		}
		ret+=cur/k;
	}
	cout << ret << endl;
	return 0;
}
