#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int q; cin>>q;
	while(q--) {
		int l1,r1,l2,r2; cin>>l1>>r1>>l2>>r2;
		int x=l1, y=l2;
		if(x==y) x++;
		cout << x << " " << y << endl;
	}
	return 0;
}
