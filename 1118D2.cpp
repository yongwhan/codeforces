#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int n,m;
vector<int> a;

bool ok(int k) {
	ll tot=0;
	for (int i=0; i<n; i++)
		tot+=max(a[i]-i/k,0);
	return tot>=m;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	cin>>n>>m;
	a= vector<int>(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	sort(a.rbegin(), a.rend());
	int low=1, high=n;
	while(high-low>1) {
		int mid=(low+high)/2;
		if(ok(mid)) high=mid;
		else low=mid;
	}
	if(ok(low)) cout << low << endl;
	else if(ok(high)) cout << high << endl;
	else cout << -1 << endl;
	return 0;
}
