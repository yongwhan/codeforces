#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int l,r,a; cin>>l>>r>>a;
	if(l>r) swap(l,r);
	int diff=r-l;
	l+=min(diff,a);
	a=max(a-diff,0);
	cout << 2*(min(l,r) + (a/2)) << endl;
	return 0;
}
