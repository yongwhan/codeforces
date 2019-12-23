#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s; cin>>s;
	map<string,int> ct;
	int mx=0;
	string ret;
	for (int i=0; i<n-1; i++) {
		string t=s.substr(i,2);
		ct[t]++;
		if(mx<ct[t])
			mx=ct[t], ret=t;
	}
	cout << ret << endl;
	return 0;
}
