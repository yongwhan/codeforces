#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main() {
	int t; cin>>t;
	while(t--) {
		int n,k; cin>>n>>k;
		for (int i=1; i<=n; i++)
			cin>>a[i];
		int i,j;
		for(i=j=1;i+k<=n;i++)
			if(a[i+k]-a[i]<a[j+k]-a[j])
				j=i;
		cout<<(a[j]+a[j+k])/2<<endl;
	}
	return 0;
}
