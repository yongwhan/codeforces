#include<bits/stdc++.h>
// #include<iostream>
// #include<sstream>
// #include<string>
// #include<set>
using namespace std;

bool ok(int x) {
	stringstream ss; ss<<x;
	string s=ss.str();
	set<char> st(s.begin(), s.end());
	return st.size()==s.size();
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	while(1) {
		n++;
		if(ok(n)) {
			cout << n << endl;
			return 0;
		}
	}
	return 0;
}
