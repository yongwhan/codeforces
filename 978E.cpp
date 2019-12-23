#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,w,cur=0, mn=0, mx=0, a; cin>>n>>w;
	for (int i=0; i<n; i++)
		cin>>a, cur+=a,
		mx=max(mx,cur), mn=min(mn,cur);
	cout << max(0LL,(w-mx)+mn+1) << endl;
	return 0;
}
