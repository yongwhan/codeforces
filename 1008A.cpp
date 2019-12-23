#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

string vwl="aeiou";

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	set<char> st(vwl.begin(), vwl.end());
	string s; cin>>s; s+='@';
	int n=s.size();
	for (int i=0; i<n-1; i++) {
		char a=s[i], b=s[i+1];
		if(st.find(a)==st.end()) {
			if(a!='n') {
				if(st.find(b)==st.end()) {
					cout << "NO" << endl; return 0;
				}
			}
		}
	}
	cout << "YES" << endl;
	return 0;
}
