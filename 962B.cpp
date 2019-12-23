#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a,b; cin>>n>>a>>b;
	string s; cin>>s;
	for (int i=0; i<s.size(); i++)
		if(s[i]=='*') s[i]=' ';
	stringstream ss(s);
	string cur;
	int ret=0;
	while(ss>>cur) {
		int sz=cur.size();
		int u=sz/2, v=sz-u;
		if(a>b) swap(a,b);
		int x=min(u,a), y=min(v,b);
		a-=x; b-=y;
		ret+=(x+y);
	}
	cout << ret << endl;
	return 0;
}
