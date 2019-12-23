#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int n; cin>>n;
		int cur=1,l,r;
		for (int i=0; i<n; i++) {
			cin>>l>>r;
			if(cur<=r) {
				int val=max(cur,l);
				cout << val << " ";
				cur=val+1;
			}
			else cout << 0 << " ";
		}
		cout << endl;
	}
	return 0;
}
