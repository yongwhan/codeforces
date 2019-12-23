#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int s2n(string &s) {
	stringstream ss(s);
	int ret; ss>>ret;
	return ret;
}

string n2s(int n) {
	stringstream ss; ss<<n;
	string ret; ret=ss.str();
	while(ret.size()<2)
		ret='0'+ret;
	return ret;
}

string n2t(int n) {
	int h=n/60, s=n%60;
	return n2s(h)+":"+n2s(s);
}

int t2n(string &s) {
	string hh=s.substr(0,2), ss=s.substr(3,2);
	return 60*s2n(hh)+s2n(ss);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s,t; cin>>s>>t;
	cout << n2t((t2n(s)+t2n(t))/2) << endl;
	return 0;
}
