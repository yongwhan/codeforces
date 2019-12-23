#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

void doit(priority_queue<ll> &a, priority_queue<ll> &b, ll &ret, int sign) {
	if(a.empty()) { b.pop(); return; }
	if(b.empty()) { ret+=sign*a.top(), a.pop(); return; }
	if(a.top()>b.top()) { ret+=sign*a.top(), a.pop(); return; }
	else { b.pop(); return; }
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,x; cin>>n;
	priority_queue<ll> a, b;
	for (int i=0; i<n; i++) cin>>x, a.push(x);
	for (int i=0; i<n; i++) cin>>x, b.push(x);
	int sign=1;
	ll ret=0;
	while(!a.empty()||!b.empty()) {
		if(sign==1) doit(a,b,ret, sign);
		else doit(b,a, ret, sign);
		sign=-sign;
	}
	cout << ret << endl;
	return 0;
}
