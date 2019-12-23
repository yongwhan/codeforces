#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mx=2e5+77;
ll n,a[mx], b[mx][2], c[mx][2], d;

ll sign(ll dir) {
	return 1-dir*2;
}

ll eval(ll i,ll dir){
	if(i<1||i>n) return 0;
	ll &r=b[i][dir], &s=c[i][dir];
	if(i==1||s==d) r=-1;
	else if(!s) {
		s=d;
		ll tmp=eval(i+a[i]*sign(dir),1-dir);
		r=(tmp<0) ? -1 : tmp+a[i];
	}
	return r;
}

int main(){
	cin>>n;
	for(ll i=2; i<=n; ++i) cin>>a[i];
	for(ll i=1; i<n; ++i) {
		++d;
		ll val=eval(i+1,1);
		cout << (val<0?-1:val+i) << endl;
	}
	return 0;
}
