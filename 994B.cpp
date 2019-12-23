#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	vector<ll> p(n), c(n);
	map<ll,int> idx;
	for (int i=0; i<n; i++)
		cin>>p[i], idx[p[i]]=i;
	for (int i=0; i<n; i++)
		cin>>c[i];
	vector<ii> v(n);
	for (int i=0; i<n; i++)
		v[i]={p[i],c[i]};
	sort(v.begin(),v.end());
	vector<ll> pq(k,0LL), ret(n);
	for (int i=0; i<n; i++) {
		int j=idx[v[i].first];
		ret[j]=c[j]+accumulate(pq.begin(),pq.end(),0LL);
		pq.push_back(v[i].second);
		sort(pq.begin(), pq.end(), greater<ll>());
		pq.resize(k);
	}
	for (auto it : ret)
		cout << it << " ";	
	cout << endl;
	return 0;
}
