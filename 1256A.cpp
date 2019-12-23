#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int q; cin>>q;
	while(q--) {
		int a,b,n,S; cin>>a>>b>>n>>S;
		int x=min(a,S/n);
		cout<<(S-x*n<=b ? "YES" : "NO")<<"\n";
	}
	return 0;
}
