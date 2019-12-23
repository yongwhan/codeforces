#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string t; cin>>t;
	string s;
	for (auto ch : t)
		if(ch!='a')
			s+=ch;
	int n=s.size();
	if(n%2) {
		cout << ":(" << endl;
		return 0;
	}
	n/=2;
	s=t.substr(0,t.size()-n);
	string sp;
	for (auto ch : s)
		if(ch!='a')
			sp+=ch;
	cout << (s+sp==t ? s : ":(") << endl;
	return 0;
}
