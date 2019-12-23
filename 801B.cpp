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

bool ok(string &x, string &y, string &z) {
	int n=x.size();
	for (int i=0; i<n; i++)
		if(min(x[i],y[i])!=z[i]) return false;
	return true;
}

int main() {
	string x,y; cin>>x>>y;
	string z=y;
	if(ok(x,y,z)) cout << z << endl;
	else cout << -1 << endl;
	return 0;
}
