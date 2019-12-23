#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	double vb,vs; cin>>vb>>vs;
	vector<double> x(n);
	for (int i=0; i<n; i++) cin>>x[i];
	double xu,yu; cin>>xu>>yu;
	map<double,int> cand;
	for (int i=1; i<n; i++) {
		double dx=xu-x[i], dy=yu, key=x[i]/vb + sqrt(dx*dx+dy*dy)/vs;
		cand[key]=i+1;
	}
	cout << (*cand.begin()).second << endl;
	return 0;
}
