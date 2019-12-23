#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	vector<ll> t(n), b(n);
	vector<ii> a(n);
	for (int i=0; i<n; i++)
		cin>>t[i]>>b[i],
		a[i]={-b[i], t[i]};
	sort(a.begin(), a.end());
	ll ret=0, total=0;
	multiset<ll> pq;
	for (int i=0; i<n; i++) {
		pq.insert(a[i].second);
		total+=a[i].second;
		while(pq.size()>k) {
			auto it = pq.begin();
			total-=(*it);
			pq.erase(pq.begin());
		}
		ret=max(ret,-a[i].first * total);
	}
	cout << ret << endl;
	return 0;
}
