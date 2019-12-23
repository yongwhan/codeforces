#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> ii;
typedef pair<ii,int> iii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k,x; cin>>n>>k;

	auto cmp = [](iii a, iii b) {
		ii x=a.first, y=b.first;
		ll u=(x.first+1)*y.second, v=(y.first+1)*x.second;
		if(u==v) return a.second<b.second;
		return u<v;
	};
	set<iii,decltype(cmp)> st(cmp);
	map<int,int> ct;
	for (int i=0; i<n; i++)
		cin>>x, ct[x]++;

	for (auto it : ct)
		st.insert({{0,it.second}, it.first});

	for (int i=0; i<k; i++) {
		iii cur=*st.begin(); st.erase(st.begin());
		cur.first.first++;
		st.insert(cur);
	}
	for (auto it : st)
		for (int i=0; i<it.first.first; i++)
			cout << it.second << " ";
	cout << endl;
	return 0;
}
