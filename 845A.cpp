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
	int n; cin>>n; n<<=1;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	sort(a.begin(), a.end());
	if(a[n/2]==a[n/2-1]) cout << "NO" << endl;
	else cout << "YES" << endl;
	return 0;
}
