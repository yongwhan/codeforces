#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll k,d,t; cin>>k>>d>>t;
	t*=2;
	ll g=(k-1)/d+1;
	g*=d;
	ll s=g+k;
	double ret=(t/s)*g;
	t%=s;
	if(t<=2*k) ret+=t/2.;
	else ret+=k, ret+=(t-2*k);
	cout << setprecision(15) << fixed << ret << endl;
	return 0;
}
