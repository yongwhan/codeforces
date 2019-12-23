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
	set<int> st(a.begin(), a.end());
	map<int,int> ct;
	for (auto x : a)
		ct[x]++;

	map<int,int> cum;
	auto it = ct.begin();
	int cur=0;
	while(it!=ct.end()) {
		cur+=(*it).second;
		cum[(*it).first]=cur;
		it++;
	}

	int ret=0;
	for (auto it : cum) {
		auto it2=st.upper_bound(it.first+5), it3=st.lower_bound(it.first);
		it2--;
		int right=cum[(*it2)], left=0;
		if(it3!=st.begin())
			it3--, left=cum[(*it3)];
		ret=max(ret,right-left);
	}
	cout << ret << endl;
	return 0;
}
