#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int n,m;
map<char,int> ct;
string s;

bool valid(string t) {
	set<char> st;
	for (int i=0; i<n; i++)
		if(s[i]!='*') {
			st.insert(s[i]);
			if(s[i]!=t[i])
				return false;
		}
	for (int i=0; i<n; i++)
		if(s[i]=='*')
			if(st.find(t[i])!=st.end())
				return false;
	return true;
}

void eval(string t) {
	if(!valid(t)) {
		m--;
		return;
	}
	set<char> st;
	for (int i=0; i<n; i++)
		if(s[i]=='*')
			st.insert(t[i]);
	for (char ch : st)
		ct[ch]++;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	string t; cin>>s;
	int k; cin>>k; m=k;
	for (int i=0; i<k; i++)
		cin>>t, eval(t);
	int ret=0;
	for (char ch='a'; ch<='z'; ch++)
		if(ct[ch]==m)
			ret++;
	cout << ret << endl;
	return 0;
}
