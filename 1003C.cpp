#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	vector<double> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	double ret=0;
	for (int i=0; i<n; i++) {
		double sum=0;
		int ct=0;
		for (int j=i; j<n; j++) {
			sum+=a[j]; ct++;
			if(ct>=k) ret=max(ret,sum/ct);
		}
	}
	cout << setprecision(10) << fixed << ret << endl;
	return 0;
}
