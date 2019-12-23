#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,x; cin>>n>>m;
	map<int,multiset<int>> a,b;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			cin>>x, a[i+j].insert(x);
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			cin>>x, b[i+j].insert(x);

	cout << (a==b ? "YES" : "NO") << endl;
	return 0;
}
