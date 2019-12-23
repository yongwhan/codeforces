#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=1e5+77;
vector<ll> a(mx,0), s(mx,0);
vector<vector<int>> children(mx);

bool valid(int cur, int depth) {
	if((depth&&s[cur]==-1)||(!depth&&s[cur]!=-1))
		return false;
	if(children[cur].empty())
		return true;
	for (auto nxt : children[cur])
		if(!valid(nxt,1-depth))
			return false;
	return true;
}

bool ok(int prev, int cur, ll cum_sum) {
	if(s[cur]!=-1 && s[cur]<cum_sum)
		return false;
	if(s[cur]==-1) {
		ll prev_sum = s[prev];
		ll child_min_sum=-1;
		for (auto nxt : children[cur]) {
			if(child_min_sum==-1) child_min_sum=s[nxt];
			else child_min_sum=min(child_min_sum, s[nxt]);
		}
		if(child_min_sum==-1) a[cur]=0;
		else {
			a[cur]=child_min_sum-prev_sum;
			if(a[cur]<0)
				return false;
		}
		for (auto nxt : children[cur])
			if(!ok(cur,nxt,s[prev]+a[cur]))
				return false;
	} else {
		a[cur]=s[cur]-cum_sum;
		for (auto nxt : children[cur])
			if(!ok(cur,nxt,s[cur]))
				return false;
	}
	return true;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,p; cin>>n;
	for (int i=1; i<n; i++) {
		cin>>p; p--;
		children[p].push_back(i);
	}
	for (int i=0; i<n; i++)
		cin>>s[i];
	if(!valid(0,1)) {
		cout << -1 << endl;
		return 0;
	}

	if(!ok(-1,0,0)) {
		cout << -1 << endl;
		return 0;
	}
	ll ret=0;
	for (int i=0; i<n; i++)
		ret+=a[i];
	cout << ret << endl;
	return 0;
}
