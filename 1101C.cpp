#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int n,l,r; cin>>n;
		set<ii> st;
		vector<ii> v(n);
		for (int i=0; i<n; i++) {
			cin>>l>>r;
			ii p={l,r};
			st.insert(p);
			v[i]=p;
		}
		bool ok=false;
		int right=st.begin()->second;
		for (auto it : st) {
			ii cur=it;
			if(it.first>right) {
				ok=true;
				break;
			}
			right=max(right,it.second);
		}

		if(!ok) {
			cout << -1 << endl;
		} else {
			for (int i=0; i<n; i++) {
				int cur=1;
				if(v[i].second>right) cur=2;
				cout << cur << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
