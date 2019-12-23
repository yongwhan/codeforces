#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,ret=0; string a,b; cin>>n>>a>>b;
	for (int i=0, j=n-1; i<j; i++, j--) {
		int cur=min((a[i]!=b[i])+(a[j]!=b[j]),(a[i]!=b[j])+(a[j]!=b[i]));
		if(b[i]==b[j]) cur=min(cur,int(a[i]!=a[j]));
		ret+=cur;
	}
	if(n%2&&a[n/2]!=b[n/2]) ret++;
	cout << ret << endl;
	return 0;
}
