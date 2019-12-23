#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,x,y; cin>>n>>x>>y;
	string s; cin>>s;
	for (int i=0; i<n; i++)
		if(s[i]=='1') s[i]=' ';
	stringstream ss(s);
	ll ct=0;
	string t;
	while(ss>>t) ct++;
	if(!ct) cout << 0 << endl;
	else cout << (ct-1)*min(x,y)+y << endl;
	return 0;
}
