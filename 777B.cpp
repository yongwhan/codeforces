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
typedef map<char,int> ci;

int eval1(ci a, ci b) {
	int ret=0;
	for (char x='0'; x<='9'; x++) {
		while(a[x]--) {
			bool ok=false;
			for (char y=x; y<='9'; y++) {
				if(b[y]) {
					ok=true;
					b[y]--;
					break;
				}
			}
			if(!ok) ret++;
		}
	}
	return ret;
}

int eval2(ci a, ci b) {
	int ret=0;
	for (char x='9'; x>='0'; x--) {
		while(a[x]--) {
			bool ok=false;
			for (char y=x+1; y<='9'; y++) {
				if(b[y]) {
					ok=true;
					b[y]--;
					break;
				}
			}
			if(ok) ret++;
		}
	}
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s,t; cin>>s>>t;
	ci a,b;
	for (int i=0; i<n; i++)
		a[s[i]]++, b[t[i]]++;
	cout << eval1(a,b) << endl;
	cout << eval2(a,b) << endl;
	return 0;
}
