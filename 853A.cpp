#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	vector<ii> c(n);
	for (int i=0; i<n; i++)
		cin>>c[i].first, c[i].second=i;
	sort(c.begin(),c.end(), greater<ii>());
	set<int> st;
	for (int i=0; i<n; i++)
		st.insert(i+k);

	ll ret=0;
	vector<ii> v(n);
	for (int i=0; i<n; i++) {
		int cur=c[i].second;
		auto it=st.lower_bound(cur);
		v[i]={cur,*it};
		ret+=ll(c[i].first)*((*it)-cur);
		st.erase(it);
	}

	sort(v.begin(),v.end());

	cout << ret << endl;
	for (int i=0; i<n; i++) {
		if(i) cout << " ";
		cout << v[i].second+1;
	}
	cout << endl;
	return 0;
}
