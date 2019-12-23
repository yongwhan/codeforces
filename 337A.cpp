#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	vector<int> a(m);
	int ret=1e9;
	for (int i=0; i<m; i++)
		cin>>a[i];
	sort(a.begin(), a.end());
	for (int i=0; i+(n-1)<m; i++)
		ret=min(ret,a[i+n-1]-a[i]);
	cout << ret << endl;
	return 0;
}
