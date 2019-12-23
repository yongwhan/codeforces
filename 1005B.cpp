#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s, t; cin>>s>>t;
	reverse(s.begin(),s.end());
	reverse(t.begin(),t.end());
	int n=s.size(), m=t.size(), l=0;
	for (int i=0; i<min(n,m); i++) {
		if(s[i]!=t[i]) break;
		l++;
	}
	cout << n+m-2*l << endl;
	return 0;
}
