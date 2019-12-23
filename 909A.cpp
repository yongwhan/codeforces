#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s,t; cin>>s>>t;
	int n=s.size(), m=t.size();
	string ret; ret+=s[0]; ret+=t[0];
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=m; j++) {
			string cur=s.substr(0,i)+t.substr(0,j);
			ret=min(ret,cur);
		}
	}
	cout << ret << endl;
	return 0;
}
