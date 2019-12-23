#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,s; cin>>n>>s;
	vector<ll> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	sort(a.begin(), a.end());
	ll less=0, greater=0;
	for (int i=0; i<n; i++)
		if(a[i]<s) less++;
		else if(a[i]>s) greater++;
	ll change=0, mid=n/2;
	bool flip=false;
	if(less>mid) change=less-mid;
	else if(greater>mid) change=greater-mid, flip=true;
	if(flip) reverse(a.begin(), a.end());
	ll ret=0;
	for (int i=0; i<change; i++)
		ret+=abs(s-a[mid+i]);
	cout << ret << endl;
	return 0;
}
