#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,p; cin>>n>>p;
	vector<int> a(n);
	int sum=0;
	for (int i=0; i<n; i++) {
		cin>>a[i];
		sum=(sum+a[i])%p;
	}
	int pre=0, ret=0;
	for (int i=0; i<n-1; i++)
		pre=(pre+a[i])%p,
		ret=max(ret, pre + (sum-pre+p)%p);
	cout << ret << endl;
	return 0;
}
