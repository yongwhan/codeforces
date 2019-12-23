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
	ll n,k; cin>>n>>k;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];

	int val=0;
	for (int iter=0; iter<1e5; iter++) {
		if(a[0]>a[1]) {
			val++;
			a.push_back(a[1]);
			a.erase(a.begin()+1);
		} else {
			val=1;
			a.push_back(a[0]);
			a.erase(a.begin());
		}

		if(val>=k) break;
	}
	cout << a[0] << endl;
	return 0;
}
