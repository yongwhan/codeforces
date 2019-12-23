#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	sort(a.begin(),a.end());
	if(k==0) {
		if(a[0]==1) cout << -1 << endl;
		else cout << 1 << endl;
		return 0;
	}
	if(k==n) {
		cout << 1000000000 << endl;
		return 0;
	}

	if(a[k-1]==a[k]) { cout << -1 << endl; return 0; }
	cout << a[k-1] << endl;
	return 0;
}
