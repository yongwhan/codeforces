#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool match1(string s, string t, set<char> &st) {
	int n=s.size(), m=t.size();
	if(n!=m)
		return false;
	for (int i=0; i<n; i++) {
		if(s[i]=='?') {
			if(st.find(t[i])==st.end())
				return false;
		} else {
			if(s[i]!=t[i])
				return false;
		}
	}
	return true;
}

bool match2(string s, set<char> &st) {
	for (auto ch : s)
		if(st.find(ch)==st.end())
			return false;
	return true;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	set<char> good(s.begin(),s.end()),bad;
	for (char ch='a'; ch<='z'; ch++)
		if(good.find(ch)==good.end())
			bad.insert(ch);
	string left,right,pattern;
	cin>>pattern;
	bool star=false;
	for (auto ch : pattern)
		if(ch=='*')
			star=true;
	int n; cin>>n;
	vector<string> lst(n);
	for (int i=0; i<n; i++)
		cin>>lst[i];
	if(!star) {
		for (auto v : lst)
			if(pattern.size()<=v.size()&&match1(pattern,v,good))
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		return 0;
	}

	int len=pattern.size();
	if(pattern[0]=='*')
		right=pattern.substr(1);
	else if(pattern[len-1]=='*')
		left=pattern.substr(0,len-1);
	for (int i=1; i<len-1; i++)
		if(pattern[i]=='*')
			left=pattern.substr(0,i), right=pattern.substr(i+1);
	int p=left.size(), q=right.size();
	for (auto v : lst) {
		int sz=v.size();
		if(len-1>sz) cout << "NO" << endl;
		else {
			string l=v.substr(0,p), m=v.substr(p,sz-p-q), r=v.substr(sz-q);
			if(match1(left,l,good)&&match1(right,r,good)&&match2(m,bad))
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
	return 0;
}
