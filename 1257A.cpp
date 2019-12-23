#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t-->0) {
		int n,x,a,b; cin>>n>>x>>a>>b;
		if(a>b) swap(a,b);
		while(x-->0) {
			if(a>1) a--;
			else if(b<n) b++;
			else break;
		}
		cout<<b-a<<"\n";
	}
	return 0;
}
