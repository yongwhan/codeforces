#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	string s,t; cin>>s>>t;
	if(s==t) {
		cout << "YES" << endl;
		return 0;
	}
	int star=-1;
	for (int i=0; i<n; i++) if(s[i]=='*') star=i;
	if(star==-1) {
		if(s!=t) {
			cout << "NO" << endl;
			return 0;
		}
	}
	string pre=s.substr(0,star), suf=s.substr(star+1);
	if(!pre.empty()&&t.substr(0,pre.size())!=pre) { cout << "NO" << endl; return 0; }
	reverse(t.begin(),t.end());
	reverse(suf.begin(),suf.end());
	if(!suf.empty()&&t.substr(0,suf.size())!=suf) { cout << "NO" << endl; return 0; }
	if(pre.size()+suf.size()<=t.size()) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
