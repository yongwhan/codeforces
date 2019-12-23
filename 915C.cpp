#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

string n2s(ll x) {
	stringstream ss; ss<<x; return ss.str();
}

ll s2n(string &s) {
	stringstream ss(s); ll ret; ss>>ret; return ret;
}

string eval(map<char,int> ct, string b, bool first) {
	if(b.empty()) return "";
	if(b.size()==1) {
		string ret;
		for (char ch='0'; ch<='9'; ch++)
			if(ct[ch])
				if(ch<=b[0]) ret+=ch;
		if(ret.empty()) return "@";
		else return ret;
	}
	char x=b[0];
	string same, diff;
	if(ct[x]) {
		ct[x]--;
		string cur=eval(ct,b.substr(1),false);
		if(cur!="@") same=x+cur;
		else same="@";
		ct[x]++;
	}
	char y='@';
	for (char ch=x-1; ch>='1'-(1-int(first)); ch--) if(ct[ch]) { y=ch; break; }
	if(y=='@') return same;
	diff+=y; ct[y]--;
	for (char ch='9'; ch>='0'; ch--) for (int i=0; i<ct[ch]; i++) diff+=ch;
	if(same=="@"||same.size()<b.size()) return diff;
	return n2s(max(s2n(same),s2n(diff)));
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string a,b; cin>>a>>b;
	if(a.size()<b.size()) {
		sort(a.begin(),a.end(),greater<char>());
		cout << a << endl;
		return 0;
	}
	map<char,int> ct;
	for (auto ch : a) ct[ch]++;
	cout << eval(ct,b,true) << endl;
	return 0;
}
