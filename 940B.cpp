#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll eval(ll n, ll k, ll A, ll B) {
	ll q=n/k, r=n%k;
	if(n==1)
		return 0;
	ll ret=(n-1)*A;
	if(q&&k>1)
		ret=min(ret,r*A+B+eval(q,k,A,B));
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,k,A,B; cin>>n>>k>>A>>B;
	cout << eval(n,k,A,B) << endl;
	return 0;
}
