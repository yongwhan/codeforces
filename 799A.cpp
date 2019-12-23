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
	int n,t,k,d; cin>>n>>t>>k>>d;
	int x=(n+k-1)/k*t;
	int y=(n-k*(d/t) + 2*k-1)/(2*k)*t + d;
	if(x<=y) cout << "NO" << endl;
	else cout << "YES" << endl;
	return 0;
}
