#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	set<ll> st;
	vector<ll> x(n);
	for (int i=0; i<n; i++)
		cin>>x[i], st.insert(x[i]);
	for (int i=0; i<n; i++) {
		ll mid=x[i];
		for (int j=0; j<35; j++) {
			ll left=mid-(1LL<<j), right=mid+(1LL<<j);
			if(st.find(left)!=st.end() && st.find(right)!=st.end()) {
				cout << 3 << endl;
				cout << left << " " << right << " " << x[i] << endl;
				return 0;
			}
		}
	}

	for (int i=0; i<n; i++) {
		ll mid=x[i];
		for (int j=0; j<35; j++) {
			ll right=mid+(1LL<<j);
			if(st.find(right)!=st.end()) {
				cout << 2 << endl;
				cout << x[i] << " " << right << endl;
				return 0;
			}
		}
	}

	cout << 1 << endl << x[0] << endl;
	return 0;
}
