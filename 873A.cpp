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
	int n,k,x; cin>>n>>k>>x;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<k; i++) a[n-1-i]=x;
	int ret=0;
	for (int i=0; i<n; i++) ret+=a[i];
	cout << ret << endl;
	return 0;
}
