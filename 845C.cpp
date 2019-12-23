#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<ii> v(n);
	set<int> st;
	for (int i=0; i<n; i++) {
		cin>>v[i].first>>v[i].second;
		st.insert(v[i].first);
		st.insert(v[i].second);
	}

	map<int,int> mp;
	int idx=0;
	for (auto it=st.begin(); it!=st.end(); it++) {
		mp[*it]=idx++;
	}

	for (int i=0; i<n; i++) {
		v[i].first=mp[v[i].first];
		v[i].second=mp[v[i].second];
	}

	map<int,int> ct;
	for (int i=0; i<n; i++)
		ct[v[i].first]++, ct[v[i].second+1]--;

	int ret=0;
	for (int i=0; i<idx; i++) {
		ret+=ct[i];
		if(ret>2) { cout << "NO" << endl; return 0; }
	}
	cout << "YES" << endl;
	return 0;
}
