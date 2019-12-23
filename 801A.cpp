#include<iomanip>
#include<cmath>
#include<algorithm>
#include<sstream>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

typedef long long ll;

int eval(string &s) {
	int ret=0, n=s.size();
	for (int i=0; i<n; i++)
		if(s.substr(i,2)=="VK") ret++;
	return ret;
}

int main() {
	string s; cin>>s;
	int n=s.size(), ret=eval(s);
	for (int i=0; i<n; i++) {
		string t=s;
		if(s[i]=='V') t[i]='K';
		else t[i]='V';
		ret=max(ret,eval(t));
	}
	cout << ret << endl;
	return 0;
}
