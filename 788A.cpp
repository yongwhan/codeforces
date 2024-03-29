#include<bits/stdc++.h>
#define INF 1000000000000000000LL
using namespace std;

// returns start index, end index, and maximum value in vector.

typedef long long ll;

vector<ll> kadane(vector<ll> & v) {
	ll sz=v.size(), ans=-INF, ii=-1, jj=-1, cur=0, i=0, j;
	for (j=0; j<sz; j++) {
		cur+=v[j];
		if(cur>ans) { ans=cur; ii=i; jj=j; }
		if(cur<=0) { cur=0; i=j+1; }
	}
	vector<ll> w(3);
	w[0]=ii+1; w[1]=jj+1; w[2]=ans;
	return w;
}

int main() {
	int n; cin>>n;
	vector<ll> a(n), b(n-1), c(n-1);
	for (int i=0; i<n; i++)
		cin>>a[i];
	int sgn=1;
	for (int i=0; i<n-1; i++) {
		ll cur=abs(a[i]-a[i+1]);
		b[i]=sgn*cur;
		c[i]=-sgn*cur;
		sgn*=-1;
	}
	vector<ll> u=kadane(b), v=kadane(c);
	cout << max(u[2], v[2]) << endl;
	return 0;
}
