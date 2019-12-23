#include<bits/stdc++.h>
using namespace std;

bool prefix(string s, string t) {
	return s.substr(0,t.size())==t;
}

bool suffix(string s, string t) {
	reverse(s.begin(), s.end());
	reverse(t.begin(), t.end());
	return prefix(s,t);
}

bool ok(string &ret, string &cur, vector<string> &a) {
	int m=ret.size();
	for (int i=0; i<m; i++)
		if( (ret[i]=='P'&&!prefix(cur,a[i])) || (ret[i]=='S'&&!suffix(cur,a[i])) )
			return false;
	return true;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	int m=2*(n-1);
	vector<string> a(m);
	for (int i=0; i<m; i++)
		cin>>a[i];
	string pre,suf;
	for (int i=0; i<m; i++) {
		if(a[i].size()==n-1) {
			if(pre.empty()) pre=a[i];
			else suf=a[i];
		}
	}
	for (int i=0; i<2; i++) {
		set<int> used;
		string ret=string(m,'S'), cur=pre+suf.back();
		for (int i=0; i<m; i++) {
			int l=a[i].size();
			if(prefix(cur,a[i]) && used.find(l)==used.end())
				used.insert(l), ret[i]='P';
		}
		if(ok(ret,cur,a)) {
			cout << ret << endl;
			return 0;
		}
		swap(pre,suf);
	}
	return 0;
}
