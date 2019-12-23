#include<bits/stdc++.h>
using namespace std;

double eval(double x, double base, double h) {
	return x*x*base/h/2.;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; double h, base=1e7; cin>>n>>h;
	double area=base*h/2., thres=area/n, prev=0;
	for (int i=0; i<n-1; i++) {
		double low=prev, high=1e7, mid;
		for (int t=0; t<100; t++) {
			mid=(low+high)/2;
			double cur=eval(mid,base,h)-eval(prev,base,h);
			if(cur>thres) high=mid;
			else low=mid;
		}
		cout << setprecision(12) << fixed << mid << " ";
		prev=mid;
	}
	cout << endl;
	return 0;
}
