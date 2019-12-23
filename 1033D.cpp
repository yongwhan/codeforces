#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll mod=998244353;

ll gcd(ll a, ll b) {
	if(!b) return a;
	else return gcd(b,a%b);
}

ll eval(ll a, ll t) {
	ll x=(pow(a,1./t) + 1e-6);
	while(t--) {
		if(a%x)	return -1;
		a/=x;
	}
	return (a==1) ? x : -1;
}

bool prime(ll x) {
	ll ret=0;
	for (ll d=1; d*d<=x; d++) {
		if(x%d==0) {
			ret++;
			ll e=x/d;
			if(d!=e) ret++;
		}
	}
	return ret==2;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n; cin>>n;
	map<ll,ll> ct;
	ll a;
	vector<ll> two;
	while(n--) {
		cin>>a;
		bool one=false;
		for (ll i=2; i<=4; i++) {
			ll cur=eval(a,i);
			if(cur!=-1&&prime(cur)) {
				one=true;
				ct[cur]+=i;
			}
			if(one)
				break;
		}
		if(!one)
			two.push_back(a);
	}

	n=two.size();
	for (auto it : ct) {
		for (ll i=0; i<n; i++) {
			ll p=it.first;
			if(two[i]%p==0) {
				ct[p]++;
				ct[two[i]/p]++;
				two[i]=1;
			}
		}
	}

	map<ll,int> multi, multi2;
	for (auto it : two)
		multi[it]++;

	while(1) {
		bool up=false;
		for (auto it : multi) {
			for (auto it2 : multi) {
				if(it.first!=it2.first) {
					ll g=gcd(it.first,it2.first);
					if(g>1) {
						up=true;
						queue<ll> gs; gs.push(g);
						while(!gs.empty()) {
							ll gc=gs.front(); gs.pop();
							multi2=multi;
							for (auto it3 : multi) {
								if(it3.first%gc==0) {
									ct[gc]+=it3.second;
									ct[it3.first/gc]+=it3.second;
									multi2.erase(it3.first);
									gs.push(it3.first/gc);
								}
							}
							multi=multi2;
						}
					}
				}
				if(up) break;
			}
			if(up) break;
		}
		if(!up) break;
	}

	ll idx=1e15;
	for (auto it : multi) {
		if(it.first>1) {
			ll factor=2;
			while(factor) {
				if(ct.find(idx)==ct.end())
					ct[idx]=it.second, factor--;
				idx++;
			}
		}
	}

	ll ret=1;
	for (auto it : ct)
		ret=(ret*(it.second+1))%mod;
	cout << ret << endl;
	return 0;
}
