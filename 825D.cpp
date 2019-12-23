#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=1e6+777;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s,t; cin>>s>>t;
	int q=0;
	vector<int> cs(26), ct(26);
	for (auto c : s)
		if(isalpha(c)) cs[c-'a']++;
		else q++;
	for (auto c : t)
		ct[c-'a']++;

	int ret=0;
	for (int i=0; i<mx; i++) {
		int cur=0;
		for (int j=0; j<26; j++)
			cur+=max(0,ct[j]*i-cs[j]);
		if(cur>q) break;
		ret=i;
	}
	
	string add;
	for (char ch='a'; ch<='z'; ch++)
		for (int i=0; i<max(0,ct[ch-'a']*ret-cs[ch-'a']); i++)
			add+=ch;
	while(add.size()<q)
		add+='a';

	int iter=0, sz=s.size();
	for (int i=0; i<sz; i++)
		if(s[i]=='?')
			s[i]=add[iter++];
	cout << s << endl;
	return 0;
}
