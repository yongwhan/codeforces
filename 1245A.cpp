#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int a,b; cin>>a>>b;
		cout<<(__gcd(a,b)==1?"Finite":"Infinite")<<"\n";
	}
	return 0;
}
