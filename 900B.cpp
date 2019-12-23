#include<bits/stdc++.h>
using namespace std;

const int mx=1e6+5;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b,c,d; cin>>a>>b>>c;
	for (int i=0; i<mx; i++) {
		a*=10, d=a/b, a%=b;
		if(d==c) { cout << i+1 << endl; return 0; }
	}
	cout << -1 << endl;
	return 0;
}
