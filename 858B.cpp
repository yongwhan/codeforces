#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,k,f; cin>>n>>m;
	map<int,int> mp;
	for (int i=0; i<m; i++)
		cin>>k>>f, k--, f--, mp[k]=f;
	set<int> st;
	for (int k=1; k<=100; k++) {
		bool ok=true;
		for (auto it : mp)
			if(it.second!=it.first/k)
				ok=false;
		if(ok) st.insert((n-1)/k+1);
	}
	if(st.size()!=1) {
		cout << -1 << endl;
		return 0;
	}
	cout << *(st.begin()) << endl;
	return 0;
}
