#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	int a=0, b=(1<<10)-1;
	for (int i=0; i<n; i++) {
		char op; int x; cin>>op>>x;
		if(op=='|') a|=x, b|=x;
		else if(op=='^') a^=x, b^=x;
		else a&=x, b&=x;
	}
	cout << 2 << endl;
	cout << "& " << (a^b) << endl;
	cout << "^ " << a << endl;
	return 0;
}
