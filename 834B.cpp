#include<cstdio>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<sstream>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	string s; cin>>s;
	map<char,int> pre, suf;
	for (int i=0; i<n; i++) {
		int j=n-1-i;
		char a=s[i], b=s[j];
		if(pre.find(a)==pre.end()) pre[a]=i;
		if(suf.find(b)==suf.end()) suf[b]=j;
	}
	vector<int> add(n,0), sub(n,0);
	for (char ch='A'; ch<='Z'; ch++)
		if(pre.find(ch)!=pre.end()) add[pre[ch]]++, sub[suf[ch]]++;
	int ret=0, cur=0;
	for (int i=0; i<n; i++) {
		cur+=add[i];
		ret=max(ret,cur);
		cur-=sub[i];
	}
	if(ret<=k) cout << "NO" << endl;
	else cout << "YES" << endl;
	return 0;
}
