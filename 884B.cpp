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

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x, y=0, cur; cin>>n>>x;
	y+=n-1;
	for (int i=0; i<n; i++) cin>>cur, y+=cur;
	if(x==y) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
