#include<bits/stdc++.h>
using namespace std;

int main() {
	int x,y,z; cin>>x>>y>>z;
	if(!z) {
		if(x>y) cout << "+" << endl;
		else if(x<y) cout << "-" << endl;
		else cout << "0" << endl;
		return 0;
	}
	if(x>y+z) cout << "+" << endl;
	else if(y>x+z) cout << "-" << endl;
	else cout << "?" << endl;
	return 0;
}
