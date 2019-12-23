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
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];

	sort(a.begin(), a.end());
	int ret=2e9+777;
	for (int i=0; i<n-1; i++)
		ret=min(ret,a[i+1]-a[i]);
	int ct=0;
	for (int i=0; i<n-1; i++)
		if(ret==a[i+1]-a[i]) ct++;
	cout << ret << " " << ct << endl;
	return 0;
}
