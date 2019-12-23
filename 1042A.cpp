#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	vector<int> a(n);
	int sum=m;
	for (int i=0; i<n; i++)
		cin>>a[i], sum+=a[i];
	int mx=*max_element(a.begin(),a.end());
	cout<<max(mx,(sum+n-1)/n)<<" "<<mx+m<<"\n";
	return 0;
}
