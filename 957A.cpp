#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s; cin>>s;
	for (int i=0; i<n-1; i++) {
		if(s[i]!='?'&&s[i]==s[i+1]) {
			cout << "No" << endl;
			return 0;
		}
	}

	bool uniq=!((s[0]=='?')||(s[n-1]=='?'));
	for (int i=0; i<n-2; i++)
		if(s[i+1]=='?') {
			if(!(s[i]!='?'&&s[i+2]!='?'&&s[i]!=s[i+2])) {
				uniq=false;
			}
		}
	
	if(!uniq) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
