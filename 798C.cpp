#include<bits/stdc++.h>
using namespace std;

int eval(int x) {
	return (x+1)/2+x%2;
}

int gcd(int a, int b) {
	if(!b) return a;
	else return gcd(b,a%b);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a,g=0,ct=0,ret=0; cin>>n;
	while(n--) {
		cin>>a;
		g=gcd(g,a);
		if(a&1) ct++;
		else ret+=eval(ct), ct=0;
	}
	ret+=eval(ct);
	cout << "YES" << endl << (g>1 ? 0 : ret) << endl;
	return 0;
}
