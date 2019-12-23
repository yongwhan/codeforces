#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

int main() {
	int n, a; cin>>n;
	int parity=0;
	bool odd=false;
	for (int i=0; i<n; i++) {
		cin>>a;
		parity=(parity+a)%2;
		if(a%2) odd=true;
	}

	if(parity) cout << "First" << endl;
	else {
		if(odd) cout << "First" << endl;
		else cout << "Second" << endl;
	}
	return 0;
}
