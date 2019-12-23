#include <bits/stdc++.h>
using namespace std;

int main () {
	int a1,a2,k1,k2,n; cin>>a1>>a2>>k1>>k2>>n;
	if (k1>k2) swap(k1,k2), swap(a1,a2);
	cout<<max(0,n-a1*(k1-1)-a2*(k2-1))<<" "<<(n<=a1*k1 ? n/k1 : a1+(n-a1*k1)/k2)<<endl;
	return 0;
}
