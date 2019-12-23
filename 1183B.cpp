#include<bits/stdc++.h>
using namespace std;

int main() {
	int q; cin>>q;
	while(q--) {
		int n,k; cin>>n>>k;
		vector<int> a(n);
		for (int i=0; i<n; i++)
			cin>>a[i];
		int mn=*min_element(a.begin(), a.end()), mx=*max_element(a.begin(),a.end());
		cout<<(mx>mn+2*k?-1:mn+k)<<endl;
	}
	return 0;
}
