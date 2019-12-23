#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int n; cin>>n;
		int mn=INT_MAX, mx=INT_MIN;
		for (int i=0; i<n; i++) {
			int l,r; cin>>l>>r;
			mn=min(mn,r);
			mx=max(mx,l);
		}
		cout<<(n==1?0:max(0,mx-mn))<<"\n";
	}
	return 0;
}
