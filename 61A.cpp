#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s,t; cin>>s>>t;
	int n=s.size();
	for (int i=0; i<n; i++)
		if(s[i]==t[i]) cout << 0;
		else cout << 1;
	cout << endl;
	return 0;
}
