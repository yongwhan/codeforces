#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,t,x; cin>>n; t=n;
	vector<bool> on(n,false);
	cout << 1;
	for (int i=1; i<=n; i++) {
		cin>>x; x--;
		on[x]=true;
		while(t&&on[t-1]) t--;
		cout<<" "<<(i+1)-max(0,n-t);
	}
	cout<<endl;
	return 0;
}
