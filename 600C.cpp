#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s,t; cin>>s;
	map<char,int> ct;
	for (auto ch : s) ct[ch]++;
	for (char ch='a'; ch<='z'; ch++) if(ct[ch]%2) t+=ch;
	int n=t.size();
	char middle='@';
	if(n%2) middle=t[n/2], ct[middle]--;
	for (int i=0; i<n/2; i++) ct[t[i]]++, ct[t[n-1-i]]--;
	for (char ch='a'; ch<='z'; ch++)
		for (int i=0; i<ct[ch]/2; i++)
			cout << ch;
	if(middle!='@') cout << middle;
	for (char ch='z'; ch>='a'; ch--)
		for (int i=0; i<ct[ch]/2; i++)
			cout << ch;
	cout << endl;
	return 0;
}
