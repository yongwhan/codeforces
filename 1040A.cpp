#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	int a,b; cin>>a>>b;
	int ret=0;
	vector<int> v(n);
	for (int i=0; i<n; i++) cin>>v[i];
	if(n%2 && v[n/2]==2)
		ret+=min(a,b);
	for (int i=0; i<n/2; i++) {
		int x=v[i], y=v[n-1-i], z=-1;
		if(x==2&&y==2) ret+=2*min(a,b);
		else if(x==2) z=y;
		else if(y==2) z=x;
		else {
			if(x!=y) { cout << -1 << endl; return 0; }
		}
		if(z!=-1) {
			if(z) ret+=b;
			else ret+=a;
		}
	}
	cout << ret << endl;
	return 0;
}
