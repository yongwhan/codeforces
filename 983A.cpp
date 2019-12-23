#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
	if(!b) return a;
	else return gcd(b,a%b);
}

int main() {
	int n; scanf("%d", &n);
	string ret;
	while(n--) {
		ll p,q,b; scanf("%lld %lld %lld", &p, &q, &b);
		ll g=gcd(p,q);
		q/=g;
		g=gcd(q,b);
		while(1) {
			g=gcd(q,g);
			if(g==1) break;
			q/=g;
		}
		if(!p||q==1) ret+="Finite\n";
		else ret+="Infinite\n";
	}
	printf("%s", ret.c_str());
	return 0;
}
