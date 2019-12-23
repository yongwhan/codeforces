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
	int i=0, j=0, ret=1;
	int x=0, y=0;
	while(1) {
		if(i>=n||j>=m) break;
		if((!x&&!y)||(x<y)) x+=a[i++];
		else if(x>y) y+=b[j++];
		else {
			x+=a[i++];
			ret++;	
		}
	}
	cout << ret << endl;
	return 0;
}
