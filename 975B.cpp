#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int n=14;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<ll> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	ll ret=0;
	for (int i=0; i<n; i++) {
		vector<ll> b=a;
		ll cur=b[i], val=0;
		b[i]=0;
		ll q=cur/n, r=cur%n;
		for (int j=0; j<n; j++) b[j]+=q;
		for (int j=0; j<r; j++) b[(i+j+1)%n]++;
		for (int j=0; j<n; j++)
			if(b[j]%2==0) val+=b[j];
		ret=max(ret,val);
	}
	cout << ret << endl;
	return 0;
}
