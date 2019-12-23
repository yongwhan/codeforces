#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,x; cin>>n>>m;
	map<int,int> a,b;
	for (int i=0; i<n; i++) {
		cin>>x;
		a[x%2]++;
	}
	for (int i=0; i<m; i++) {
		cin>>x;
		b[x%2]++;
	}
	cout << min(a[0],b[1])+min(a[1],b[0]) << endl;
	return 0;
}
