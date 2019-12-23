#include <bits/stdc++.h>
using namespace std;

const int mx=2e5+777;

int a[mx];

int main() {
	a[0]=INT_MIN;

	int n; cin>>n;
	bool flag=false;
	int p=0;
	for (int i=1; i<=n; i++) {
		cin>>a[i];
		flag^=a[i]<0;
		if (a[i]<0&&a[i]>=a[p]) p=i;
	}
	if (flag) a[p]=0;
	int x=0, y=0;
	for (int i=1; i<=n; i++) {
		if (!a[i]) {
			if (x) cout<<1<<" "<<x<<" "<<i<<"\n";
			x=i;
		}
		else {
			if (y) cout<<1<<" "<<y<<" "<<i<<"\n";
			y=i;
		}
	}
	if(x&&y) cout<<2<<" "<<x<<"\n";
	return 0;
}
