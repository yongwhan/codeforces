#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	int mx=0;
	for (int i=0; i<n; i++)
		cin>>a[i],
		mx=max(mx,a[i]);
	int ret=0, cur=0;
	for (int i=0; i<n; i++) {
		if(a[i]!=mx) cur=0;
		else cur++;
		ret=max(ret,cur);
	}
	cout << ret << endl;
	return 0;
}
