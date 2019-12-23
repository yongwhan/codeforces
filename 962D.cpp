#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<ll> v(n);
	map<ll, set<int>> mp;
	for (int i=0; i<n; i++)
		cin>>v[i], mp[v[i]].insert(i);
	int m=n;
	while(!mp.empty()) {
		auto it = mp.begin();
		int ct=0;
		ll key=it->first;
		int sz=(it->second).size();
		for (auto it2 : it->second) {
			if(ct%2)
				mp[key*2].insert(it2), v[it2]<<=1;
			else {
				if(ct==sz-1) break;
				v[it2]=-1, m--;
			}
			ct++;
		}
		mp.erase(it);
	}

	cout << m << endl;
	for (int i=0; i<n; i++)
		if(v[i]!=-1)
			cout << v[i] << " ";
	cout << endl;
	return 0;
}
