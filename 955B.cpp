#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	map<char,int> ct;
	for (auto ch : s) ct[ch]++;
	int mn=1e9, mx=0;
	for (char ch='a'; ch<='z'; ch++)
		if(ct.find(ch)!=ct.end())
			mn=min(mn,ct[ch]),
			mx=max(mx,ct[ch]);
	if(ct.size()>4||ct.size()<2) { cout << "No" << endl; return 0; }
	if(ct.size()==4) {
		cout << "Yes" << endl; return 0;
	}
	if(ct.size()==2) {
		cout << (mn>=2 ? "Yes" : "No") << endl; return 0;
	}
	cout << (mx>=2 ? "Yes" : "No") << endl;
	return 0;
}
