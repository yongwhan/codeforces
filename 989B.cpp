#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,p; cin>>n>>p;
	string s; cin>>s;
	for (int i=0; i<n-p; i++) {
		if(s[i]=='.'&&s[i+p]=='.')
			s[i]='1', s[i+p]='0';
		else if(s[i]=='.')
			s[i]='0'+(1-(s[i+p]-'0'));
		else if(s[i+p]=='.')
			s[i+p]='0'+(1-(s[i]-'0'));
	}

	for (int i=0; i<n; i++)
		if(s[i]=='.')
			s[i]='1';

	bool rep=true;
	for (int i=0; i<n-p; i++)
		if(s[i]!=s[i+p])
			rep=false;
	if(rep) cout << "No" << endl;
	else cout << s << endl;
	return 0;
}
