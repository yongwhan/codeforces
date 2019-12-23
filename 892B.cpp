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
	vector<int> L(n);
	for (int i=0; i<n; i++) cin>>L[i];

	vector<int> go(n,0), stop(n,0);
	for (int i=0; i<n; i++) {
		int left=max(0, i-L[i]), right=i-1;
		if(left<=right) go[left]++, stop[right]++;
	}

	int ret=0, die=0;
	for (int i=0; i<n; i++) {
		die+=go[i];
		if(die>0) ret++;
		die-=stop[i];
	}
	cout << n-ret << endl;
	return 0;
}
