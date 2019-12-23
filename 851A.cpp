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
	int n,k,t; cin>>n>>k>>t;
	if(t<=k) { cout << t << endl; return 0; }
	int val=n+k-t;
	if(val<=k) { cout << max(0,val) << endl; return 0; }
	cout << k << endl;
	return 0;
}
