#include<bits/stdc++.h>
using namespace std;

typedef pair<double,double> dd;
const double inf=1e20;

double cross(dd a, dd b) {
	return a.first*b.second-a.second*b.first;
}

dd subt(dd a, dd b) {
	return {a.first-b.first, a.second-b.second};
}

double norm(dd a) {
	double x=a.first, y=a.second;
	return sqrt(x*x+y*y);
}

double dist(dd p, dd s1, dd s2) {
	return cross(subt(s1,p),subt(s2,p))/norm(subt(s2,s1));
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<dd> p(n);
	for (int i=0; i<n; i++)
		cin>>p[i].first>>p[i].second;
	double ret=inf;
	for (int i=0; i<n; i++) ret=min(ret,dist(p[(i+1)%n],p[i],p[(i+2)%n])/2);
	cout << setprecision(15) << fixed << ret << endl;
	return 0;
}
