#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<ll> a(n);
	for (int i=0; i<n; i++)
		cin>>a[n-1-i];
	ll ret=a[0], cur=a[0];
	for (int i=1; i<n; i++)
		cur=max(0LL,min(cur-1,a[i])),
		ret+=cur;
	cout << ret << endl;
	return 0;
}
