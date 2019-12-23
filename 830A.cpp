#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k,p; cin>>n>>k>>p;
	vector<int> a(n), b(k);
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<k; i++) cin>>b[i];
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	int ret=-1;
	for (int i=0; i<=k-n; i++) {
		int cur=0;
		for (int j=0; j<n; j++)
			cur=max(cur,abs(a[j]-b[i+j])+abs(b[i+j]-p));
		if(ret==-1) ret=cur;
		else ret=min(ret,cur);
	}
	cout << ret << endl;
	return 0;
}
