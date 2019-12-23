#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,k,ret=0; cin>>n>>k;
	vector<ll> a(n), t(n);
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<n; i++) cin>>t[i];
	for (int i=0; i<n; i++) ret+=a[i]*t[i];
	ll cur=0;
	for (int i=0; i<k; i++)
		cur+=a[i]*(1-t[i]);
	ll mx=cur;
	for (int i=k; i<n; i++)
		cur+=a[i]*(1-t[i]), cur-=a[i-k]*(1-t[i-k]), mx=max(mx,cur);
	cout << ret + mx << endl;
	return 0;
}
