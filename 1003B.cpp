#include<bits/stdc++.h>
using namespace std;

int main() {
	int a,b,x,t=0; cin>>a>>b>>x;
	string s;
	if(a<b) t=1;
	while(x--) {
		s+=t+'0';
		t^=1;
		t?a--:b--;
	}
	if(t) {
		while(a--) {
			s+='0';
		}
	}
	else {
		while(b--) {
			s+='1';
		}
	}
	while(a-->0) {
		s+='0';
	}
	while(b-->0) {
		s+='1';
	}
	cout << s << endl;
	return 0;
}
