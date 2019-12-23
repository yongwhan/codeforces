#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<ii> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i].first, a[i].second=i+1;
	sort(a.rbegin(),a.rend());
	int ret=0;
	for (int i=0; i<n; i++)
		ret+=(i*a[i].first+1);
	cout<<ret<<endl;
	for (int i=0; i<n; i++)
		cout<<a[i].second<<" ";
	cout<<endl;
	return 0;
}
