#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const ii init={0,0};

auto cmp = [](const ii &x, const ii &y) {
	if(x.first==y.first) return x.second>y.second;
	else return x.first<y.first;
};

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	map<ii, int, decltype(cmp)> mp(cmp);
	int n; cin>>n;
	for (int i=1; i<=n; i++) {
		int x,y; cin>>x>>y;
		ii key={x,y};
		if(mp.find(key)!=mp.end()) {
			cout << i << " " << mp[key] << endl;
			return 0;
		}
		mp[key]=i;
	}

	ii prev = init;
	for (auto it : mp) {
		auto key=it.first;
		if(prev!=init) {
			if(prev.second>=key.second) {
				cout << mp[key] << " " << mp[prev] << endl;
				return 0;
			}
		}
		prev=key;
	}
	cout << -1 << " " << -1 << endl;
	return 0;
}
