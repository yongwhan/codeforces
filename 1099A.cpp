#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int w,h,ret=0,u1,d1,u2,d2;
	cin>>w>>h>>u1>>d1>>u2>>d2;
	ret=w;
	for (int i=h; i>=0; i--) {
		ret+=i;
		if(i==d1) ret=max(0,ret-u1);
		if(i==d2) ret=max(0,ret-u2);
	}
	cout << ret << endl;
	return 0;
}
