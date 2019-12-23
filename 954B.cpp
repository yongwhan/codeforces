#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool ok(string &s) {
	int n=s.size(), m=n/2;
	for (int i=0; i<m; i++)
		if(s[i]!=s[i+m])
			return false;
	return true;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; string s; cin>>n>>s;
	int ret=0;
	for (int j=2; j<=n; j+=2) {
		string cur=s.substr(0,j);
		if(ok(cur))
			ret=max(ret,j/2);
	}
	cout << n-max(0,ret-1) << endl;
	return 0;
}
