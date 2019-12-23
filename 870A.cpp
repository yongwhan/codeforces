#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	vector<int> a(n), b(m);
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<m; i++) cin>>b[i];
	int ret=100;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			if(a[i]==b[j]) ret=min(ret,a[i]);
			else ret=min({ret,a[i]*10+b[j], b[j]*10+a[i]});
	cout << ret << endl;
	return 0;
}
