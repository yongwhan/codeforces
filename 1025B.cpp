#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const ll inf=1e15;

const int mx=5e4;

vector<ll> p(mx,true);

ll gcd(ll a, ll b) {
	if(!b) return a;
	else return gcd(b,a%b);
}

ll lcm(ll a, ll b) {
	return a*b/gcd(a,b);
}

vector<ll> factor(ll x) {
	vector<ll> ret;
	for (int t=2; t<mx; t++) if(p[t]) {
		if(x%t==0) {
			ret.push_back(t);
			while(1) {
				if(x%t) break;
				x/=t;
			}
		}
	}
	if(x>1) ret.push_back(x);
	return ret;
}

ll eval(ll r, ll a) {
	vector<ll> pfact = factor(a);
	for (auto it : pfact)
		if(r%it==0) return it;
	return -1;
}

int main() {
	p[0]=p[1]=false;
	for (int i=2; i*i<mx; i++) if(p[i])
		for (int j=i; j*i<mx; j++) p[i*j]=false;

	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll a,b,n; cin>>n;
	ll ret=0;
	ll aa=inf, bb=inf, c, mn=inf;
	while(n--) {
		cin>>a>>b,
		c=min(a,b);
		if(c<mn)
			aa=a, bb=b, mn=c;
		ret=gcd(ret,lcm(a,b));
	}
	if(ret==1) { cout << -1 << endl; return 0; }
	ll x=eval(ret,aa), y=eval(ret,bb);
	if(x==-1&&y==-1) cout << -1 << endl;
	else if(x==-1) cout << y << endl;
	else cout << x << endl;
	return 0;
}
