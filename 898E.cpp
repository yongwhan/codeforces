#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
const ll inf=1e9;

bool is_sq(ll x) {
	ll d=ll(sqrt(x)+1e-6);
	return x==d*d;
}

ll dist_to_nsq(ll x) {
	for (ll t=1; t<10; t++) {
		for (int sgn=-1; sgn<=1; sgn++)
			if(sgn) {
				ll cur=x+t*sgn;
				if(cur>=0)
					if(!is_sq(cur)) return t;
			}
	}
	return -inf;
}

ll dist_to_sq(ll x) {
	ll d=ll(sqrt(x)+1e-6), e=d+1;
	return min(x-d*d, e*e-x);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<ll> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	priority_queue<ll> sq, nsq;
	ll ret=0;
	for (int i=0; i<n; i++) {
		ll x=a[i];
		if(is_sq(x)) sq.push(-dist_to_nsq(x));
		else nsq.push(-dist_to_sq(x));
	}

	int m=n/2, t=sq.size()-m;

	while(t>0 && t--)
		ret+=-sq.top(), sq.pop();
	while(t<0 && t++)
		ret+=-nsq.top(), nsq.pop();
	cout << ret << endl;
	return 0;
}
