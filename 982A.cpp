#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool ok(string &s) {
	int n=s.size();
	for (int i=0; i<n-1; i++)
		if(s[i]=='1'&&s[i+1]=='1')
			return false;
	return true;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; string s; cin>>n>>s;
	if(!ok(s)) { cout << "No" << endl; return 0; }
	for (int i=0; i<n; i++) {
		if(s[i]=='0') {
			s[i]='1';
			if(ok(s)) { cout << "No" << endl; return 0; }
			s[i]='0';
		}
	}
	cout << "Yes" << endl;
	return 0;
}
