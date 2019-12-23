#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s,t,cur; cin>>s>>t;
	map<char,int> ct;
	for (auto ch : s) ct[ch]++;
	for (char ch='1'; ch<='9'; ch++) if(ct[ch]) { ct[ch]--, cur+=ch; break; }
	for (char ch='0'; ch<='9'; ch++) for (int i=0; i<ct[ch]; i++) cur+=ch;
	if(cur==t) cout << "OK" << endl;
	else cout << "WRONG_ANSWER" << endl;
	return 0;
}
