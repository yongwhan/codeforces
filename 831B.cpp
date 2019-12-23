#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s,t; cin>>s>>t;
	map<char,char> mp;
	for (int i=0; i<26; i++)
		mp[s[i]]=t[i],
		mp[toupper(s[i])]=toupper(t[i]);
	for (char ch='0'; ch<='9'; ch++)
		mp[ch]=ch;
	char ch;
	while(cin>>ch)
		cout << mp[ch];
	cout << endl;
	return 0;
}
