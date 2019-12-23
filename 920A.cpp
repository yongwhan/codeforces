#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int n,k; cin>>n>>k;
		vector<bool> tap(n,false);
		int x;
		for (int i=0; i<k; i++) cin>>x, x--, tap[x]=true;
		int ret=0;
		for (int i=0; i<n; i++) {
			int mn=1e9;
			for (int j=0; j<n; j++)
				if(tap[j]) mn=min(mn,abs(i-j)+1);
			ret=max(ret,mn);
		}
		cout << ret << endl;
	}
	return 0;
}
