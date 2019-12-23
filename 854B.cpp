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
	int n,k; cin>>n>>k;
	cout << min(1, min(k,n-k)) << " " << min(n-k,2*k) << endl;
	return 0;
}
