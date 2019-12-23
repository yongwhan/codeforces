#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int n=s.size(), ret=0, cur=1;
	s+=s;
	for (int i=1; i<(n<<1); i++) {
		ret=max(ret, cur);
		if(s[i]!=s[i-1]) cur++;
		else cur=1;
	}
	cout << min(n,ret) << endl;
	return 0;
}
