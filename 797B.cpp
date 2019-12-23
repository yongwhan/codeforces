#include<bits/stdc++.h>
using namespace std;

const int inf=1e9;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int ret=0, n, x;
	int a=inf, b=-inf;
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>x;
		if(x>0) ret+=x;
		if(x%2) {
			if(x>0) a=min(a,x);
			else if(x<0) b=max(b,x);
		}
	}
	if(ret%2) {
		cout << ret << endl;
		return 0;
	}
	if(a!=inf) {
		int val=ret-a;
		if(b!=-inf)
			val=max(val,ret+b);
		cout << val << endl;
		return 0;
	}
	cout << ret+b << endl;
	return 0;
}
