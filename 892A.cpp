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
	vector<ll> a(n), b(n);
	ll sum=0;
	for (int i=0; i<n; i++) cin>>a[i], sum+=a[i];
	for (int i=0; i<n; i++) cin>>b[i];

	sort(b.begin(), b.end(), greater<ll>());
	if(sum<=b[0]+b[1]) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
