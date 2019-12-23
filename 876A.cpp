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
	int n,a,b,c; cin>>n>>a>>b>>c;
	cout<<max(min(min(a,b)*(n-1),min(a,b)+(n-2)*c),0);
	return 0;
}
