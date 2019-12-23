#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k,ret=-1,x; cin>>n>>k;
	for (int i=0; i<n; i++) {
		cin>>x;
		if(k%x==0) {
			int q=k/x;
			if(ret==-1) ret=q;
			else ret=min(ret,q);
		}
	}
	cout << ret << endl;
	return 0;
}
