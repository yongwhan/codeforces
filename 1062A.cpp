#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n+2);
	a[0]=0;
	a[n+1]=1001;
	for (int i=1; i<=n; i++) cin>>a[i];
	int ret=0;
	for (int i=0; i<=n+1; i++)
		for (int j=i+1; j<=n+1; j++)
			if(a[i]-i==a[j]-j)
				ret=max(ret, j-i-1);
	cout << ret << endl;
	return 0;
}
