#include<bits/stdc++.h>
using namespace std;

typedef pair<double,double> dd;
typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	ll ret=0;
	vector<int> x(n), y(n);
	for (int i=0; i<n; i++)
		cin>>x[i]>>y[i];
	map<dd,bool> done;
	map<double,int> ct;
	for (int i=0; i<n; i++) {
		for (int j=0; j<i; j++) {
			double m=(x[i]!=x[j])?double(y[i]-y[j])/(x[i]-x[j]):INT_MAX;
			const dd p={m, m!=INT_MAX?y[i]-m*x[i]:x[i]};
			if (done[p])
				continue;
			done[p]=true;
			ct[m]++;
			ret+=done.size()-ct[m];
		}
	}
	cout<<ret<<"\n";
	return 0;
}
