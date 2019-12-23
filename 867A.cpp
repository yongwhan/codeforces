#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,ret=0; cin>>n;
	string s; cin>>s;
	for (int i=0; i<n-1; i++) {
		if(s[i]==s[i+1])
			continue;
		if(s[i]=='S') ret++;
		else ret--;
	}
	cout << (ret>0 ? "YES" : "NO") << endl;
	return 0;
}
