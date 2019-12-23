#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

bool cycle(map<char,char> &mp) {
	for (char ch='a'; ch<='z'; ch++) {
		int mx=100;
		set<char> vis;
		char cur=ch;
		while(1) {
			vis.insert(cur);
			char nxt=mp[cur];
			if(vis.find(nxt)!=vis.end()) {
				return true;
			}

			if(nxt==' ') break;
			cur=nxt;
		}
	}
	return false;
}

int main() {
	int n; cin>>n;
	set<char> exist;
	vector<string> v(n);
	map<char,bool> root;
	for (char ch='a'; ch<='z'; ch++) root[ch]=true;
	map<char,char> mp;
	for (char ch='a'; ch<='z'; ch++) mp[ch]=' ';
	for (int i=0; i<n; i++) {
		string s; 
		cin>>s;
		int l=s.size();
		for (int j=0; j<l; j++) {
			exist.insert(s[j]);
		}
		set<char> st(s.begin(), s.end());
		if(st.size()!=l) {
			cout << "NO" << endl; return 0;
		}

		for (int i=0; i<l-1; i++) {
			if(mp[s[i]]==' '||mp[s[i]]==s[i+1]) {
				mp[s[i]]=s[i+1];
			} else {
				cout << "NO" << endl; return 0;
			}
			root[s[i+1]]=false;
		}
	}

	if(cycle(mp)) {
		cout << "NO" << endl; return 0;
	}

	string ret;
	for (char ch='a'; ch<='z'; ch++) {
		char cur=ch;
		if(root[cur] && exist.find(cur)!=exist.end()) {
			while(1) {
				ret+=cur;
				cur=mp[cur];
				if(!isalpha(cur)) break;
			}
		}
	}
	set<char> st2(ret.begin(), ret.end());
	if(ret.size()==st2.size()) cout << ret << endl;
	else cout << "NO" << endl;
	return 0;
}
