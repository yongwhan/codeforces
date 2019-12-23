#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

string eval(int n, int a, int b, int c, const string &s) {
	string ret=string(n,'@');
	int ct=0;
	for (int i=0; i<n; i++)
		if(s[i]=='S'&&a) a--, ct++, ret[i]='R';
		else if(s[i]=='R'&&b) b--, ct++, ret[i]='P';
		else if(s[i]=='P'&&c) c--, ct++, ret[i]='S';
	for (int i=0; i<n; i++) {
		if(ret[i]!='@') continue;
		if(a) a--, ret[i]='R';
		else if(b) b--, ret[i]='P';
		else if(c) c--, ret[i]='S';
	}
	return (ct>=int((n+1)/2) ? ret : "");
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int n,a,b,c; cin>>n>>a>>b>>c;
		string s; cin>>s;
		string cur=eval(n,a,b,c,s);
		if(cur.empty()) cout<<"NO"<<"\n";
		else cout<<"YES"<<"\n"<<cur<<"\n";
	}
	return 0;
}
