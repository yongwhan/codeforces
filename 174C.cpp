#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	a.push_back(-1);
	map<int, set<ii>> mp;
	int left=0;
	for (int right=0; right<=n; right++)
		if(a[right]!=a[left])
			mp[a[left]].insert({left, right-1}),
			left=right;

	vector<ii> ret;
	while(!mp.empty()) {
		auto it=mp.rbegin();
		ii e=*(it->second.begin());
		int key=it->first;
		if(key)
			ret.push_back(e);
		mp[key].erase(e);
		if(mp[key].empty())
			mp.erase(key);
		key--;
		if(key<0) {
			break;
		}
		if(!mp[key].empty()) {
			set<ii>::iterator ubd=mp[key].upper_bound(e), lbd=mp[key].end();
			if(ubd!=mp[key].begin())
				lbd=ubd, lbd--;
			if(ubd!=mp[key].end()) {
				ii high=*ubd;
				if(e.second==high.first-1)
					e.second=high.second,
					mp[key].erase(ubd);
			}
			if(lbd!=mp[key].end()) {
				ii low=*lbd;
				if(e.first==low.second+1)
					e.first=low.first,
					mp[key].erase(lbd);
			}
		}
		mp[key].insert(e);
	}

	cout << ret.size() << endl;
	for (auto it : ret)
		cout << it.first+1 << " " << it.second+1 << endl;
	return 0;
}
