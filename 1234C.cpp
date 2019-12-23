#include <bits/stdc++.h>
using namespace std;
int main()  {
	int q; cin>>q;
	while(q--) {
		int n,j=0,r=0; cin>>n;
		vector<string> s(2);
		cin>>s[0]>>s[1];
		while(j<n) {
			if(s[r][j]>'2') {
				r^=1;
				if(s[r][j]<='2') break;
			}
			j++;
		}
		cout<<((j==n&&r==1)?"YES":"NO")<<endl;
	}
	return 0;
}
