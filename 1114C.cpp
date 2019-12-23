#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=1e6+777;
vector<bool> flag(mx,true);

ll eval(ll n, ll b) {
	ll ret=0;
	while(n)
		ret+=n/b, n/=b;
	return ret;
}

int main() {
	flag[0]=flag[1]=false;
	for (int i=2; i*i<mx; i++)
		if(flag[i])
			for (int j=i; j*i<mx; j++)
				flag[i*j]=false;
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,b, ret=1e18+7777777; cin>>n>>b;
	for (ll p=0; p<mx; p++) {
		if(p>=b)
			break;
		if(flag[p]) {
			if(b%p==0) {
				int ct=0;
				while(b%p==0)
					b/=p, ct++;
				ret=min(ret,eval(n,p)/ct);
			}
		}
	}
	if(b>1)
		ret=min(ret,eval(n,b));
	cout << ret << endl;
	return 0;
}
