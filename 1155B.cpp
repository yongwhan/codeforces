#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; string s,ret; cin>>n>>s;
	int cnt1=(n-11)/2, cnt2=cnt1;
	for (int i=0; i<n; i++) {
		if(s[i]=='8') {
			if(cnt1>0) --cnt1;
			else ret+=s[i];
		}
		else {
			if(cnt2>0) --cnt2;
			else ret+=s[i];
		}
	}
	cout<<(ret.front()=='8'?"YES":"NO")<<endl;
	return 0;
}
