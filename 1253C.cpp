#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	vector<ll> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	map<int,ll> add;
	ll ret=0;
	for (int i=0; i<n; i++) {
		add[i%m]+=a[i];
		ret+=add[i%m];
		cout<<ret<<" ";
	}
	cout<<"\n";
	return 0;
}
