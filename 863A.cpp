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

bool good(string &s) {
	int n=s.size();
	for (int i=0; i<n/2; i++)
		if(s[i]!=s[n-1-i]) return false;
	return true;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	for (int i=0; i<20; i++) {
		if(good(s)) {
			cout << "YES" << endl;
			return 0;
		}
		s="0"+s;
	}
	cout << "NO" << endl;
	return 0;
}
