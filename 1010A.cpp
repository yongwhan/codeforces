#include<bits/stdc++.h>
using namespace std;

const double inf=2e9;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; double m; cin>>n>>m;
	vector<double> a(n), b(n);
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<n; i++) cin>>b[i];
	double low=0, high=inf, mid;
	while(abs(low-high)>1e-6) {
		mid=(low+high)/2;
		double cur=m+mid;
		for (int i=0; i<n; i++)
			cur*=(1.-1./a[i]),
			cur*=(1.-1./b[(i+1)%n]);
		if(cur<m) low=mid;
		else high=mid;
	}
	if(abs(mid-inf)<1e-6) cout << -1 << endl;
	else cout << setprecision(10) << fixed << mid << endl;
	return 0;
}
