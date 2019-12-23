#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n; cin>>n;
	vector<ll> p(n);
	for (int i=0; i<n; i++)
		cin>>p[i], p[i]--;
	vector<ll> sz;
	for (int i=0; i<n; i++)
		if(p[i]!=-1) {
			int cur=p[i], val=0;
			while(1) {
				int nxt=p[cur];
				if(nxt==-1) break;
				val++;
				p[cur]=-1;
				cur=nxt;
			}
			sz.push_back(val);
		}
	sort(sz.begin(), sz.end());
	ll ret=0;
	if(sz.size()>1) {
		ll a=sz.back();
		sz.pop_back();
		ll b=sz.back();
		sz.pop_back();
		sz.push_back(a+b);
	}
	for (ll x : sz)
		ret+=x*x;
	cout << ret << endl;
	return 0;
}
