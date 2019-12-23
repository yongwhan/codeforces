#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,l; cin>>n>>l;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];

	int ret=0;
	for (int d=l; d<=100; d++) {
		int ct=0;
		for (auto x : a)
			ct+=x/d;
		ret=max(ret,d*ct);
	}
	cout << ret << endl;
	return 0;
}
