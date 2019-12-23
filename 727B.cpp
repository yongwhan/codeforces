#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

void eval(string &s) {
	int n=s.size();
	for (int i=0; i<n; i++)
		if(isalpha(s[i]))
			s[i]=' ';
}

ll s2n(string &s) {
	stringstream ss(s);
	int ret; ss>>ret;
	return ret;
}

string n2s(int x) {
	stringstream ss; ss<<x;
	return ss.str();
}

string dot(string &s) {
	string ret;
	for (auto ch : s)
		if(isdigit(ch))
			ret+=ch;
	return ret;
}

string fmt(ll n) {
	string ret;
	int r=n%100;
	if(r) {
		ret=n2s(r);
		while(ret.size()<2)
			ret='0'+ret;
	}
	n/=100;
	string cur=n2s(n), add;
	reverse(cur.begin(), cur.end());
	for (char ch : cur) {
		add=ch+add;
		if(add.size()==3)
			ret=add+'.'+ret,
			add="";
	}
	if(!add.empty())
		ret=add+'.'+ret;
	if(ret.back()=='.')
		ret.pop_back();
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	eval(s);
	stringstream ss(s);
	ll ret=0;
	string cur;
	while(ss>>cur) {
		if(cur.find('.')==string::npos)
			ret+=s2n(cur)*100;
		else {
			if(cur[cur.size()-3]=='.') {
				string rem=cur.substr(cur.size()-2);
				cur=cur.substr(0,cur.size()-2);
				ret+=s2n(rem);
			}
			cur=dot(cur);
			ret+=s2n(cur)*100;
		}
	}
	cout << fmt(ret) << endl;
	return 0;
}
