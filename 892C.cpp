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
const int inf=1e9;

int gcd(int a, int b) {
	if(!b) return a;
	else return gcd(b, a%b);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	int one=0;
	for (int i=0; i<n; i++) {
		cin>>a[i];
		if(a[i]==1) one++;
	}
	if(one) {
		cout << n-one << endl;
		return 0;
	}

	int ret=inf;
	for (int i=0; i<n; i++) {
		int cur=a[i];
		for (int j=i+1; j<n; j++) {
			cur=gcd(cur,a[j]);
			if(cur==1)
				ret=min(ret, abs(j-i)+(n-1));
		}
	}
	if(ret==inf) ret=-1;
	cout << ret << endl;
	return 0;
}
