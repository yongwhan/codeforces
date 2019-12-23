#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	vector<int> c(n), a(m);
	for (int i=0; i<n; i++) cin>>c[i];
	for (int i=0; i<m; i++) cin>>a[i];
	int ret=0;
	int j=0;
	for (int i=0; i<n; i++) {
		if(j>=m) break;
		if(a[j]>=c[i]) j++;
	}
	cout << j << endl;
	return 0;
}
