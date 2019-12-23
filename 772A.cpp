#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll mx=1e5+5;
ll n,p;
vector<double> a(mx), b(mx);
const double inf=1e20, eps=1e-6;

bool ok(double t) {
	double cur=0;
	for (int i=0; i<n; i++)
		cur+=max(0.,a[i]*t-b[i]);
	return t*p+eps>cur;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	cin>>n>>p;
	ll sum=0;
	for (int i=0; i<n; i++)
		cin>>a[i]>>b[i], sum+=a[i];

	if(sum<=p) {
		cout << -1 << endl;
		return 0;
	}

	double low=0, high=inf, mid;
	for (int i=0; i<500; i++) {
		mid=(low+high)/2;
		if(ok(mid)) low=mid;
		else high=mid;
	}
	cout << setprecision(5) << fixed << mid << endl;
	return 0;
}
