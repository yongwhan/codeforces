#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll sum=0,n,k,m;
	cin>>n>>k>>m;
	vector<ll> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i], sum+=a[i];
	sort(a.begin(), a.end());
	double ret=0;
	for (int i=0; i<=min(n-1,m); i++)
		ret=max(ret,(sum+min(k*(n-i),m-i))/double(n-i)),
		sum-=a[i];
	cout << setprecision(10) << fixed << ret << endl;
	return 0;
}
