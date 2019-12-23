#include<bits/stdc++.h>
using namespace std;

int main() {
	int a=1, b=1;
	char c;
	while(cin>>c) {
		if (c=='1') {
			cout << a << " " << 2 << endl;
			a++;
			if (a==5) a=1;
		} else {
			cout << b << " " << 1 << endl;
			b+=2;
			if (b==5) b=1;
		}
	}
	return 0;
}
