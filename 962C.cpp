#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const ll mx=5e4;
const int inf=1e5;

bool ok(string &s, string &t) {
	int n=s.size(), m=t.size();
	if(n<m) return false;
	int i=0;
	for (int j=0; j<n; j++) {
		if(i>=m) break;
		if(s[j]==t[i]) i++;
	}
	return i>=m;
}

int eval(string &s, ll x) {
	stringstream ss; ss<<x;
	string t=ss.str();
	if(ok(s,t)) {
		return s.size()-t.size();
	}
	return inf;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int ret=inf;
	for (ll i=1; i<mx; i++)
		ret=min(ret,eval(s,i*i));
	if(ret==inf) cout << -1 << endl;
	else cout << ret << endl;
	return 0;
}
