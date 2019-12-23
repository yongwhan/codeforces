#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,m,k; cin>>n>>m>>k;
	vector<ll> a(n);
	ll mn=1e9;
	for (int i=0; i<n; i++) {
		cin>>a[i];
		if(i%2==0)
			mn=min(mn,a[i]);
	}
	if(n%2==0) {
		cout << 0 << endl;
		return 0;
	}

	cout << min(m/(n/2+1) * k,mn) << endl;
	return 0;
}
