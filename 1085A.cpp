#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s,ret; cin>>s;
	if(s.size()%2) ret+=s[0], s=s.substr(1);
	while(!s.empty()) {
		reverse(s.begin(), s.end());
		ret+=s[0];
		s=s.substr(1);
	}
	reverse(ret.begin(), ret.end());
	cout << ret << endl;
	return 0;
}
