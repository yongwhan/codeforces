#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,x,ret=0; cin>>n>>m;
	map<int,int> ct;
	for (int i=0; i<m; i++) {
		cin>>x; ct[--x]++;
		bool ok=true;
		for (int j=0; j<n; j++)
			ok&=bool(ct[j]);
		if(ok) {
			ret++;
			for (int j=0; j<n; j++) ct[j]--;
		}
	}
	cout << ret << endl;
	return 0;
}
