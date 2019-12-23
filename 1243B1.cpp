#include<bits/stdc++.h>
using namespace std;

bool eval(string &s, string &t, int n) {
	vector<int> need;
	for (int i=0; i<n; i++)
		if(s[i]!=t[i])
			need.push_back(i);
	if(need.size()!=2) return false;
	swap(s[need[0]],t[need[1]]);
	return s==t;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int n; cin>>n;
		string s,t; cin>>s>>t;
		cout<<(eval(s,t,n)?"YES":"NO")<<"\n";
	}
	return 0;
}
