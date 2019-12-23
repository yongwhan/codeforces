#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

string lst="aeiou";
set<char> vwl(lst.begin(), lst.end());

bool is_vowel(char ch) {
	return vwl.find(ch)!=vwl.end();
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s,t; cin>>s>>t;
	if(s.size()!=t.size()) {
		cout << "No" << endl;
		return 0;
	}
	int n=s.size();
	for (int i=0; i<n; i++) {
		if(is_vowel(s[i])!=is_vowel(t[i])) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
