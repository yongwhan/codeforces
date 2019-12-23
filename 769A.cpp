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
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	sort(a.begin(), a.end());
	cout << a[n/2] << endl;
	return 0;
}
