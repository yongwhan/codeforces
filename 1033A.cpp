#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool checked(int x, int y, int a, int b) {
	if(x==a||y==b) return true;
	return abs(x-a)==abs(y-b);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	int ax,ay,bx,by,cx,cy; cin>>ax>>ay>>bx>>by>>cx>>cy;
	if(checked(ax,ay,bx,by)) { cout << "NO" << endl; return 0; }
	if(checked(ax,ay,cx,cy)) { cout << "NO" << endl; return 0; }
	if((bx-ax)*(cx-ax)<0 || (by-ay)*(cy-ay)<0) { cout << "NO" << endl; return 0; }
	cout << "YES" << endl;
	return 0;
}
