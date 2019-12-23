#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int y,b,r; cin>>y>>b>>r;
	int ret=0;
	for (int i=1; i<=100; i++)
		if(i<=y&&i+1<=b&&i+2<=r)
			ret=3*i+3;
	cout << ret << endl;
	return 0;
}
