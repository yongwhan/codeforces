#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	int k=0, sum=0;
	for (int i=0; i<n; i++) {
		cin>>a[i];
		k=max(k,a[i]);
		sum+=a[i];
	}
	cout << k + max(0, (2*sum+1-k*n+(n-1))/n) << endl;
	return 0;
}
