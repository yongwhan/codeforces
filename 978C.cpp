#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,m,j=0,pre=0; cin>>n>>m;
	vector<ll> a(n), b(m);
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<m; i++) cin>>b[i];
	for (int i=0; i<m; i++) {
		while(j<n) {
			if(pre+a[j]<b[i]) pre+=a[j++];
			else break;
		}
		cout << j+1 << " " << b[i]-pre << endl;
	}
	return 0;
}
