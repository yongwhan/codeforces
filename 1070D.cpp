#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,k,ret=0, x, prev=0; cin>>n>>k;
	for (int i=0; i<n; i++) {
		cin>>x;
		if(prev) {
			x=((x+prev>=k) ? x-(k-prev) : 0);
			ret++;
			prev=0;
		}
		ret+=x/k;
		prev=x%k;
	}
	if(prev) ret++;
	cout << ret << endl;
	return 0;
}
