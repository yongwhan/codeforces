#include<bits/stdc++.h>
using namespace std;

const double inf=2e9;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<double> x(n), v(n);
	for (int i=0; i<n; i++) cin>>x[i];
	for (int i=0; i<n; i++) cin>>v[i];
	double low=0, high=inf, mid;
	for (int t=0; t<100; t++) {
		mid=(low+high)/2;
		double l=-inf*inf, r=inf*inf;
		for (int i=0; i<n; i++) l=max(l,x[i]-v[i]*mid), r=min(r,x[i]+v[i]*mid);
		if(l>r) low=mid;
		else high=mid;
	}
	cout << setprecision(15) << fixed << mid << endl;
	return 0;
}
