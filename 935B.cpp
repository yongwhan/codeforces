#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; string s; cin>>n>>s;
	int val=0, ret=0;
	for (int i=0; i<n-1; i++) {
		if(s[i]=='R') val++;
		else val--;
		if(!val && s[i]==s[i+1]) ret++;
	}
	cout << ret << endl;
	return 0;
}
