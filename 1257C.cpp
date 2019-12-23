#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t-->0) {
		int n,a; cin>>n;
		map<int,int> idx;
		int ret=INT_MAX;
		for (int i=1; i<=n; i++) {
			cin>>a;
			if(idx[a])
				ret=min(ret,i-idx[a]+1);
			idx[a]=i;
		}
		cout<<(ret!=INT_MAX?ret:-1)<<"\n";
	}
	return 0;
}
