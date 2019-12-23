#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	map<char,int> ct;
	for (auto ch : s) ct[ch]++;
	string t;
	for (auto it : ct)
		for (int i=0; i<it.second; i++)
			t+=it.first;
	if(s!=t) { cout << "NO" << endl; return 0; }
	if((ct['a']==ct['c']||ct['b']==ct['c'])&&ct['a']&&ct['b']) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
