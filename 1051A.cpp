#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

string eval(string &s) {
	int lower=0, upper=0, digit=0, n=s.size();
	for (char ch : s)
		if(isalpha(ch)) {
			if(ch==tolower(ch)) lower++;
			else upper++;
		} else digit++;
	if(lower&&upper&&digit) return s;

	if(!lower&&!upper) {
		s[0]='a'; s[1]='A'; return s;
	}
	if(!lower&&!digit) {
		s[0]='a'; s[1]='0'; return s;
	}
	if(!upper&&!digit) {
		s[0]='A'; s[1]='0'; return s;
	}

	if(!lower) {
		if(digit>1) {
			for (int i=0; i<n; i++)
				if(!isalpha(s[i])) {
					s[i]='a';
					break;
				}
			return s;
		}
		else {
			for (int i=0; i<n; i++)
				if(isalpha(s[i])&&s[i]==toupper(s[i])) {
					s[i]='a';
					break;
				}
			return s;
		}
	}

	if(!upper) {
		if(digit>1) {
			for (int i=0; i<n; i++)
				if(!isalpha(s[i])) {
					s[i]='A';
					break;
				}
			return s;
		}
		else {
			for (int i=0; i<n; i++)
				if(isalpha(s[i])&&s[i]==tolower(s[i])) {
					s[i]='A';
					break;
				}
			return s;
		}
	}

	if(!digit) {
		if(lower>1) {
			for (int i=0; i<n; i++)
				if(isalpha(s[i])&&s[i]==tolower(s[i])) {
					s[i]='0';
					break;
				}
			return s;
		} else {
			for (int i=0; i<n; i++)
				if(isalpha(s[i])&&s[i]==toupper(s[i])) {
					s[i]='0';
					break;
				}
			return s;
		}
	}

	return "@";
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		string s; cin>>s; cout << eval(s) << endl;
	}
	return 0;
}
