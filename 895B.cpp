#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll get(ll val, map<ll,ll> &pre) {
	auto it=pre.upper_bound(val);
	if(it==pre.begin()) return 0;
	it--;
	return (*it).first;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,x,k, sum=0, ret=0; cin>>n>>x>>k;
	map<ll,ll> pre;
	vector<ll> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i], pre[a[i]]++;
	for (auto it : pre)
		sum+=it.second, pre[it.first]=sum;
	for (auto cur : a) {
		ll b=(cur+x-1)/x*x, t=b+x*(k-1), l=t-1, r=t+x-1;
		bool ok=true;
		if(!k) {
			if(cur%x==0) ok=false;
			else l=cur-1, r=b-1;
		}
		if(ok) ret+=pre[get(r,pre)]-pre[get(l,pre)];
	}
	cout << ret << endl;
	return 0;
}
