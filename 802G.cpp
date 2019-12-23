#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s,t="heidi"; cin>>s;
	int n=t.size(), j=0;
	for (auto ch : s) {
		if(j>=n) break;
		if(ch==t[j]) j++;
	}
	if(j==n) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
