#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	sort(a.rbegin(), a.rend());
	int ret=0;
	for (int i=0; i<n; i++)
		if(m>0) m=max(0,m-a[i]), ret++;
	cout << ret << endl;
	return 0;
}
