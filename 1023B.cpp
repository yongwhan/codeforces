#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,k; cin>>n>>k;
	ll ans=min(k-1,n)-(k+1)/2+1;
	if(k%2==0)
		ans--;
	cout << max(0LL,ans) << endl;
	return 0;
}
