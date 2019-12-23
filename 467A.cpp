#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,p,q,ret=0; cin>>n;
	for (int i=0; i<n; i++) {
		cin>>p>>q;
		if(q-p>=2)
			ret++;
	}
	cout << ret << endl;
	return 0;
}
