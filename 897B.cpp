#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

string rev(string s) {
	int n=s.size();
	for (int i=0; i<n/2; i++)
		swap(s[i],s[n-1-i]);
	return s;
}

string n2s(ll x) {
	stringstream ss; ss<<x; return ss.str();
}

string eval(ll x) {
	stringstream ss; ss<<x;
	string a=n2s(x);
	string b=rev(a);
	return a+b;
}

bool ok(string &ret) {
	if(ret[0]=='0') return false;
	return true;
}

ll s2n(string &s) {
	stringstream ss(s);
	ll ret; ss>>ret;
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll k,p; cin>>k>>p;
	ll iter=0, ret=0;
	while(1) {
		if(!k) break;
		iter++;
		string cur=eval(iter);
		if(ok(cur)) k--, ret=(ret+s2n(cur))%p;
	}
	cout << ret << endl;
	return 0;
}
