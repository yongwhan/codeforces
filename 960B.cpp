#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k1,k2; cin>>n>>k1>>k2;
	vector<ll> a(n), b(n);
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<n; i++) cin>>b[i];
	priority_queue<ll> pq;
	for (int i=0; i<n; i++)
		pq.push(abs(a[i]-b[i]));
	int k=k1+k2;
	if(k) {
		while(k--) {
			ll cur=pq.top(); pq.pop();
			if(cur) cur--;
			else cur++;
			pq.push(cur);
		}
	}
	ll ret=0;
	while(!pq.empty()) {
		ll cur=pq.top(); pq.pop();
		ret+=cur*cur;
	}
	cout << ret << endl;
	return 0;
}
