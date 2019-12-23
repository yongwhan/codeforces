#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,k; cin>>n>>k;
	vector<ll> x(n);
	for (int i=0; i<n; i++)
		cin>>x[i];
	ll a; cin>>a;
	vector<ll> c(n);
	for (int i=0; i<n; i++)
		cin>>c[i];
	priority_queue<ll> pq;
	ll ret=0;
	for (int i=0; i<n; i++) {
		pq.push(-c[i]);
		while(k<x[i]) {
			if(pq.empty()) {
				cout<<-1<<"\n";
				return 0;
			}
			ret+=-pq.top(); pq.pop();
			k+=a;
		}
	}
	cout<<ret<<"\n";
	return 0;
}
