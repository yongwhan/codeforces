#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,cur=0; cin>>n>>m;
	vector<int> a(n);
	ll sum=0;
	for (int i=0; i<n; i++)
		cin>>a[i], sum+=a[i];
	sort(a.begin(), a.end());
	for (int i=0; i<n; i++)
		if(a[i]>cur)
			cur++;
	cout << sum-(n+a[n-1]-cur) << endl;
	return 0;
}
