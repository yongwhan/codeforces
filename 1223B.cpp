#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int q; cin>>q;
	while(q--) {
		string s,t; cin>>s>>t;
		bool ok=false;
		for (char x:s)
			for (char y:t)
				if(x==y)
					ok=true;
		cout<<(ok?"YES":"NO")<<endl;
	}
	return 0;
}
