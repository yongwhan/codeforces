#include<cstdio>
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
	int n=s.size(), ret=0;
	for (int i=0; i<n; i++) {
		char ch=s[i];
		if(ch==toupper(ch)) ret++;
	}
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string line, s;
	getline(cin,line);
	getline(cin,line);
	stringstream ss(line);
	int ret=0;
	while(ss>>s) ret=max(ret,eval(s));
	cout << ret << endl;
	return 0;
}
