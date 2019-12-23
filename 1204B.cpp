#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,l,r; cin>>n>>l>>r;
	int mn=0, mx=0;
	for (int i=0; i<l; i++)
		mn+=(1<<i);
	mn+=(n-l);
	for (int i=0; i<r; i++)
		mx+=(1<<i);
	mx+=(n-r)*(1<<(r-1));
	cout<<mn<<" "<<mx<<endl;
	return 0;
}
