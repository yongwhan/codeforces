#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int q; cin>>q;
	while(q--) {
		ll n; cin>>n;
		string s;
		while(n)
			s+='0'+n%3, n/=3;
		s+='0';
		reverse(s.begin(),s.end());
		int sz=s.size();
		bool up=true;
		while(up) {
			up=false;
			for (int i=0; i<sz; i++) {
				if(s[i]=='2') {
					up=true;
					s[i-1]+=1;
					for (int j=i; j<sz; j++)
						s[j]='0';
					break;
				}
			}
		}
		ll ret=0;
		for (const char &ch : s)
			ret=ret*3+(ch-'0');
		cout<<ret<<endl;
	}
	return 0;
}
