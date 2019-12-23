#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,h,x; cin>>n>>m>>h;
	vector<int> a(m), b(n);
	for (int i=0; i<m; i++)
		cin>>a[i];
	for (int i=0; i<n; i++)
		cin>>b[i];
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cin>>x;
			cout << (x ? min(a[j], b[i]) : 0) << " ";
		}
		cout << endl;
	}
	return 0;
}
