#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t-->0) {
		int a,b; cin>>a>>b;
		int x=(a+b)/3;
		int q=a-x, p=b-x;
		cout<<(p+2*q==a&&2*p+q==b&&p>=0&&q>=0?"YES":"NO")<<"\n";
	}
	return 0;
}
