#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

ll ct(string &s, char ch) {
	int ret=0;
	for (auto e : s) if(e==ch) ret++;
	return ret;
}

bool cmp(string s, string t) {	
	return ct(s,'s')*ct(t,'h')>ct(t,'s')*ct(s,'h');
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<string> v(n);
	for (int i=0; i<n; i++) cin>>v[i];
	sort(v.begin(),v.end(),cmp);
	string s;
	for (auto e : v) s+=e;
	ll ct=0, ret=0;
	for (auto ch : s)
		if(ch=='h') ct++;
	for (auto ch : s) {
		if(ch=='s') ret+=ct;
		else ct--;
	}
	cout << ret << endl;
	return 0;
}
