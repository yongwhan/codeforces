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
	int n,k; cin>>n>>k;
	vector<int> a(n);
	int amax=-2e9, amin=2e9;
	for (int i=0; i<n; i++) cin>>a[i], amax=max(amax,a[i]), amin=min(amin,a[i]);
	if(k>=3) { cout << amax << endl; return 0; }
	if(k==1) { cout << amin << endl; return 0; }
	vector<int> pre(n,2e9), suf(n,2e9);
	pre[0]=a[0];
	suf[n-1]=a[n-1];
	for (int i=1; i<n; i++) pre[i]=min(pre[i-1],a[i]);
	for (int i=n-2; i>=0; i--) suf[i]=min(suf[i+1],a[i]);
	int ret=-2e9;
	for (int i=0; i<n-1; i++) ret=max(ret, max(pre[i], suf[i+1]));
	cout << ret << endl;
	return 0;
}
