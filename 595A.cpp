#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,ret=0,x; cin>>n>>m;
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			int cur=0;
			for (int k=0; k<2; k++)
				cin>>x, cur+=x;
			if(cur) ret++;
		}
	}
	cout << ret << endl;
	return 0;
}
