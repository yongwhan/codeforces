#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	for (int c=0; c<t; c++) {
		int n; cin>>n;
		string s; cin>>s;
		bool ok=true;
		for (int i=0; i<n/2; i++) {
			int cur=abs(s[i]-s[n-1-i]);
			if(cur&&cur!=2)
				ok=false;
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
