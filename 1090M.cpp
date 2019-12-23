#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k,ret=0,cur=1; cin>>n>>k;
	vector<int> a(n+1);
	for (int i=0; i<n; i++) cin>>a[i];
	a[n]=a[n-1];
	for (int i=0; i<n; i++) {
		if(a[i]==a[i+1]) ret=max(ret,cur), cur=1;
		else cur++;
	}
	ret=max(ret,cur);
	cout << ret << endl;
	return 0;
}
