#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin>>s;
	int l=0, r=s.size()-1, cl=3;
	while(l<r&&s[l]==s[r]&&cl>=3) {
		char c=s[l];
		cl=0;
		while(s[l]==c) l++, cl++;
		while(s[r]==c&&r>=l) r--, cl++;
	}
	if (l>r&&cl>=2) cout<<cl+1<<"\n";
	else cout<<0<<"\n";
	return 0;
}

