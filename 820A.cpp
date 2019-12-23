#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

int main() {
	int c, v0, v1, a, l; cin>>c>>v0>>v1>>a>>l;
	if(v0>=c) {
		cout << 1 << endl;
		return 0;
	}
	int x=v0;
	for (int i=1; i<5000; i++) {
		x-=(l-1);
		x=min(c, x+min(v0+a*i, v1)-1);
		if(x==c) {
			cout << i+1 << endl; return 0;
		}
	}
	return 0;
}
