#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	set<int> st;
	for (int i=1; i<=m; i++)
		st.insert(i);
	for (int i=0; i<n; i++) {
		int l,r; cin>>l>>r;
		for (int j=l; j<=r; j++)
			st.erase(j);
	}

	cout << st.size() << endl;
	for (int x : st)
		cout << x << " ";
	cout << endl;
	return 0;
}
