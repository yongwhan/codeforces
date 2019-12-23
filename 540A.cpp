#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s,t; cin>>s>>t;
	int ret=0;
	for (int i=0; i<n; i++) {
		int cur=abs(s[i]-t[i]);
		ret+=min(cur,10-cur);
	}
	cout << ret << endl;
	return 0;
}
