#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int n=s.size();
	char cur='a';
	for (int i=0; i<n; i++) {
		if(cur>'z') break;
		if(s[i]<=cur) s[i]=cur++;
	}
	if(cur>'z') cout << s << endl;
	else cout << -1 << endl;
	return 0;
}
