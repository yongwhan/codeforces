#include<bits/stdc++.h>
using namespace std;

int next(int x, int n) {
	x++;
	if(x==n+1) x-=n;
	return x;
}

int prev(int x, int n) {
	x--;
	if(x==0) x=n;
	return x;
}

int main() {
	int n,a,x,b,y; cin>>n>>a>>x>>b>>y;
	while(1) {
		if(a==b) {
			cout << "YES" << endl;
			return 0;
		}
		if(a==x||b==y) break;
		a=next(a,n); b=prev(b,n);
	}
	cout << "NO" << endl;
	return 0;
}
