#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n; cin>>n;
	vector<ll> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	ll x,f; cin>>x>>f;
	ll ct=0;
	for (int i=0; i<n; i++) {
		ll cur=x+f;
		ct+=a[i]/cur;
		if((a[i]%cur)>x)
			ct++;
	}
	cout << f*ct << endl;
	return 0;
}
