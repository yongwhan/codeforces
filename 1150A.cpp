#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,r; cin>>n>>m>>r;
	vector<int> s(n), b(m);
	for (int i=0; i<n; i++) cin>>s[i];
	for (int i=0; i<m; i++) cin>>b[i];
	int x=*min_element(s.begin(), s.end()), y=*max_element(b.begin(), b.end());
	cout << max(r, (r/x)*y+(r%x)) << endl;
	return 0;
}
