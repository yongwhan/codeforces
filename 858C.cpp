#include<bits/stdc++.h>
using namespace std;

set<char> vowel={'a', 'e', 'i', 'o', 'u'};

bool notypo(string &s) {
	set<char> st;
	int n=s.size(), ct=0;
	for (auto ch : s) {
		if(vowel.find(ch)==vowel.end()) ct++, st.insert(ch);
		else ct=0, st.clear();
		if(ct>=3&&st.size()>1) return false;
	}
	return true;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int n=s.size();
	vector<string> ret;
	string cur;
	for (auto ch : s) {
		string nxt=cur; nxt+=ch;
		if(notypo(nxt)) cur=nxt;
		else ret.push_back(cur), cur.clear(), cur+=ch;
	}
	if(!cur.empty()) ret.push_back(cur);
	int sz=ret.size();
	for (int i=0; i<sz; i++) {
		if(i) cout << " ";
		cout << ret[i];
	}
	cout << endl;
	return 0;
}
