#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<ll> a(n);
	ll sum=0;
	for (int i=0; i<n; i++)
		cin>>a[i],
		sum+=a[i];
	vector<ll> b=a;
	sort(b.begin(), b.end());
	int m; cin>>m;
	while(m--) {
		int q; cin>>q;
		cout << sum-b[n-1-(q-1)] << endl;
	}
	return 0;
}
