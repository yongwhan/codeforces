#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int p,n,x; cin>>p>>n;
	set<int> st;
	for (int i=1; i<=n; i++) {
		cin>>x; x%=p;
		if(st.find(x)!=st.end()) {
			cout << i << endl;
			return 0;
		}
		st.insert(x);
	}
	cout << -1 << endl;
	return 0;
}
