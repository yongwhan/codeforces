#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int inf=1e9;

ll eval(ll x, ll y) {
	ll ret=1;
	for (int i=0; i<y; i++) ret*=(x-i);
	for (int i=1; i<=y; i++) ret/=i;
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,x,y=inf,cumul=0,cur=3; cin>>n;
	map<int,ll> ct;
	for (int i=0; i<n; i++)
		cin>>x, ct[x]++;
	for (auto it : ct) {
		x=it.second;
		cumul+=x;
		y=min(x,cur);
		cur=max(cur-x,0LL);
		if(cumul>=3) break;
	}
	cout << eval(x,y) << endl;
	return 0;
}
