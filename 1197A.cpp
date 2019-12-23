#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int n; cin>>n;
		vector<int> a(n);
		for (int i=0; i<n; i++) cin>>a[i];
		sort(a.rbegin(),a.rend());
		cout<<min(a[1]-1,n-2)<<endl;
	}
	return 0;
}
