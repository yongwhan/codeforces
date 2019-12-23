#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	map<int,int> ct;
	for (int i=0; i<m; i++) {
		int a,b; cin>>a>>b;
		for (int j=a; j<=b; j++)
			ct[j]++;
	}

	int idx=0;
	for (int i=1; i<=n; i++)
		if(ct[i]!=1) {
			idx=i;
			break;
		}
	if(!idx) cout << "OK" << endl;
	else cout << idx << " " << ct[idx] << endl;
	return 0;
}
