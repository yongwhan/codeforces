#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=100;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int x,y; cin>>x>>y;
	int cur=x-(y-1);
	if( y<1||cur<0||cur%2||(y==1&&x) ) cout << "No" << endl;
	else cout << "Yes" << endl;
	return 0;
}
