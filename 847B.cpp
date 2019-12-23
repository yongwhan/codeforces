#include<bits/stdc++.h>
using namespace std;

const int mx=2e5+77;
vector<vector<int>> ret(mx);

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	map<int,int> mp; int idx=0;
	set<int> st;
	for (int i=0; i<n; i++) {
		auto it=st.lower_bound(-a[i]);
		if(it==st.end()) st.insert(-a[i]), mp[a[i]]=idx, ret[idx++].push_back(a[i]);
		else mp[a[i]]=mp[-*it], ret[mp[-*it]].push_back(a[i]), st.erase(*it), st.insert(-a[i]);
	}
	for (int i=0; i<idx; i++) {
		for (auto e : ret[i]) cout << e << " ";
		cout << endl;
	}
	return 0;
}
