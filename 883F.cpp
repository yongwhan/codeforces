#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

string eval(string s) {
	int n=s.size();
	string t;
	for (int i=0; i<n; i++)
		if(s[i]=='u')
			t+="oo";
		else
			t+=s[i];
	s=t;
	string u;
	for (int i=0; i<n-1; i++)
		if(s.substr(i,2)=="kh") {
			u=s.substr(0,i);
			u+='h';
			u+=s.substr(i+2);
			return u;
		}
	return s;
}

string standard(string s) {
	while(1) {
		string t=eval(s);
		if(s==t) return t;
		s=t;
	}
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	set<string> st;
	for (int i=0; i<n; i++) {
		string s; cin>>s;
		st.insert(standard(s));
	}
	cout << st.size() << endl;
	return 0;
}
