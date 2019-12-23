#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int inf=2e5;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll b,q,l,m; cin>>b>>q>>l>>m;
	set<ll> a;
	ll x;
	for (int i=0; i<m; i++) {
		cin>>x;
		a.insert(x);
	}

	int ret=0;
	for (int i=0; i<inf; i++) {
		if(abs(b)>l) break;
		if(a.find(b)==a.end()) ret++;
		b*=q;
	}

	if(ret>inf/2.2) cout << "inf" << endl;
	else cout << ret << endl;
	return 0;
}
