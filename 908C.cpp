#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=1050;

double eval(double r, double p, int u, int v) {
	double hypo=2*r, side=abs(u-v);
	return p+max(0., sqrt(hypo*hypo-side*side));
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,r; cin>>n>>r;
	vector<double> pos(mx,-r);
	vector<int> x(n);
	for (int i=0; i<n; i++) cin>>x[i];
	for (int i=0; i<n; i++) {
		if(i) cout << " ";
		int v=x[i];
		double cur=0;
		for (int j=max(0,v-2*r); j<=min(mx-1,v+2*r); j++)
			cur=max(cur,eval(r, pos[j],j,v));
		pos[x[i]]=max(pos[x[i]],cur);
		cout << setprecision(10) << fixed << cur;
	}
	cout << endl;
	return 0;
}
