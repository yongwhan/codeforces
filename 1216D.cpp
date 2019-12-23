#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ll n,x=0,s=0,z=0,y;
	cin>>n;
	vector<ll> a(n);
	for(int i=0; i<n; i++)
		cin>>a[i], x=max(x,a[i]);
	for(int i=0;i<n;i++)
		y=x-a[i], s+=y, z=__gcd(y,z);
	cout<<s/z<<" "<<z<<endl;
	return 0;
} 
