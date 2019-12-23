#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	vector<int> a(n+1,0);
	for (int i=0; i<n; i++) cin>>a[i+1];
	sort(a.begin(),a.end());
	int ret=n;
	for (int i=1,j=1; i<=n; i++) {
		while(j<=n&&a[j]-a[i]<=k) j++;
		if(a[j-1]>a[i]) ret--;
	}
	cout << ret << endl;
	return 0;
}
