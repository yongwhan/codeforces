#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<ll> a(2*n);
	for (int i=0; i<2*n; i++) cin>>a[i];
	sort(a.begin(), a.end());
	ll ret=(a[n-1]-a[0])*(a[2*n-1]-a[n]);
	for (int i=1; i<n; i++)
		ret=min(ret, (a[n-1+i]-a[i])*(a[2*n-1]-a[0]));
	cout << ret << endl;
	return 0;
}
