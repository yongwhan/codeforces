#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<set<int>> v(3);
	int n,m,x; cin>>n;
	vector<int> p(n), a(n), b(n);
	for (int i=0; i<n; i++) cin>>p[i];
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<n; i++) cin>>b[i];
	for (int i=0; i<n; i++) for (int j=1; j<=3; j++)
		if(j==a[i]||j==b[i]) v[j-1].insert(p[i]);
	cin>>m;
	for (int i=0; i<m; i++) {
		cin>>x; x--;
		int val=-1;
		if(!v[x].empty()) val=*(v[x].begin());
		for (int j=0; j<3; j++)
			v[j].erase(val);
		if(i) cout << " ";
		cout << val;
	}
	cout << endl;
	return 0;
}
