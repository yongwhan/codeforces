#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	int x=0, y=0;
	for (int i=0; i<n; i++)
		cin>>a[i];
	for (int i=n-1; i>=0; i--) {
		int cur=a[i];
		if(x>=y) y+=cur;
		else x+=cur;
	}
	cout << min(x,y) << " " << max(x,y) << endl;
	return 0;
}
