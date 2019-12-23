#include<cstdio>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<sstream>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll m,b,ret=0, x=0; cin>>m>>b;
	ll y=b;
	while(y>=0)
		ret=max(ret, x*(x+1)*(y+1)/2+y*(y+1)*(x+1)/2),
		x+=m, y--;
	cout << ret << endl;
	return 0;
}
