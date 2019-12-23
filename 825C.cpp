#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k,ret=0; cin>>n>>k;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	for (int i=0; i<n; i++) {
		while(a[i]>2*k) k*=2, ret++;
		k=max(a[i],k);
	}
	cout << ret << endl;
	return 0;
}
