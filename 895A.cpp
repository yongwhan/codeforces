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
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n, sum=0; cin>>n;
	vector<int> a(2*n);
	for (int i=0; i<n; i++) cin>>a[i], a[n+i]=a[i], sum+=a[i];
	int ret=sum;
	for (int i=0; i<n; i++) {
		int cur=0;
		for (int j=0; j<n; j++) {
			cur+=a[i+j];
			ret=min(ret, abs(sum-cur - cur));
		}
	}
	cout << ret << endl;
	return 0;
}
