#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	map<string,string> mp;
	string s,t;
	for (int i=0; i<n; i++) cin>>s>>t, mp[t]=s;
	for (int i=0; i<m; i++)
		cin>>s>>t, cout << s << " " << t << " " << "#" << mp[t.substr(0,t.size()-1)] << endl;	
	return 0;
}
