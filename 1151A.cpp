#include<bits/stdc++.h>
using namespace std;

string lst="ACTG";

int eval(char x, char y) {
	int d=abs(x-y);
	return min(d,26-d);
}

int main() {
	int n; string s; cin>>n>>s;
	int ret=4*26;
	for (int i=0; i<=n-4; i++) {
		int cur=0;
		for (int j=0; j<4; j++)
			cur+=eval(lst[j],s[i+j]);
		ret=min(ret,cur);
	}
	cout<<ret<<endl;
	return 0;
}
