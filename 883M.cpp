#include<bits/stdc++.h>
using namespace std;
int eval(int x, int y) {
	return max(abs(x-y)+1,2);
}
int main() {
	int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
	cout<<2*(eval(x1,x2)+eval(y1,y2))<<endl;
	return 0;
}
