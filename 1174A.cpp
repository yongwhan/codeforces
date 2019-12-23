#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	int m=2*n;
	vector<int> a(m);
	for (int i=0; i<m; i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	int x=0, y=0;
	for (int i=0; i<n; i++)
		x+=a[i], y+=a[i+n];
	if(x==y) {
		cout<<-1<<endl; return 0;
	}
	for (auto x : a)
		cout<<x<<" ";
	cout<<endl;
	return 0;
}
