#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	int mx=0;
	for (int i=0; i<n; i++) {
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	int ret=0;
	for (auto x : a)
		ret+=mx-x;
	cout << ret << endl;
	return 0;
}
