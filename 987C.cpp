#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const ll inf=1e15;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n; cin>>n;
	vector<ll> s(n), c(n);
	for (int i=0; i<n; i++) cin>>s[i];
	for (int i=0; i<n; i++) cin>>c[i];
	vector<ll> d(n,inf);
	for (int i=0; i<n; i++)
		for (int j=i+1; j<n; j++)
			if(s[i]<s[j])
				d[i]=min(d[i],c[i]+c[j]);
	vector<ll> e(n,inf);
	for (int i=0; i<n; i++)
		for (int j=i+1; j<n; j++)
			if(s[i]<s[j])
				e[i]=min(e[i],c[i]+d[j]);
	ll ret=*min_element(e.begin(),e.end());
	if(ret==inf) cout << -1 << endl;
	else cout << ret << endl;
	return 0;
}
