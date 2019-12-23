#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

string n2s(int x, int l) {
	stringstream ss; ss<<x;
	string s=ss.str();
	while(s.size()<l) s='0'+s;
	return s;
}

bool lucky(string s) {
	int x=0;
	for (int i=0; i<3; i++) x+=s[i]-'0';
	for (int i=3; i<6; i++) x-=s[i]-'0';
	return x==0;
}

int diff(string s, string t) {
	int ret=0;
	for (int i=0; i<6; i++)
		if(s[i]!=t[i]) ret++;
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int ret=1e9;
	for (int i=0; i<1e6; i++) {
		string t=n2s(i,6);
		if(lucky(t)) ret=min(ret,diff(s,t));
	}
	cout << ret << endl;
	return 0;
}
