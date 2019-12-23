#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool match_ch(char x, char y) {
	return tolower(x)==tolower(y);
}

bool match_str(string &s, string &t) {
	int n=s.size();
	for (int i=0; i<n; i++)
		if(!match_ch(s[i],t[i]))
			return false;
	return true;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<string> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	string b; cin>>b;
	char ch; cin>>ch;
	set<int> rep;
	for (int i=0; i<n; i++) {
		string u=a[i];
		if(u.size()>b.size())
			continue;
		for (int j=0; j<=b.size()-u.size(); j++) {
			string v=b.substr(j,u.size());
			if(match_str(u,v)) {
				for (int k=0; k<u.size(); k++)
					rep.insert(j+k);
			}
		}
	}
	for (auto it : rep) {
		char cur=b[it], add=ch;
		if(match_ch(cur,ch)) {
			for (char t='a'; t<='z'; t++)
				if(!match_ch(cur,t)) {
					add=t;
					break;
				}
		}
		if(isupper(cur)) b[it]=toupper(add);
		else b[it]=add;
	}
	cout << b << endl;
	return 0;
}
