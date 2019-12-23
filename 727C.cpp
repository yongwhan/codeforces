#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,p,q,r,x; cin>>n;
	vector<int> a(n);
	cout<<"? 2 3"<<endl;
	cin>>p;
	cout<<"? 1 3"<<endl;
	cin>>q;
	cout<<"? 1 2"<<endl;
	cin>>r;
	int sum=(p+q+r)/2;
	a[0]=sum-p, a[1]=sum-q, a[2]=sum-r;
	for (int i=3; i<n; i++)
		cout << "? " << i << " " << i+1 << endl, cin>>x, a[i]=x-a[i-1];
	cout << "!";
	for (auto e : a)
		cout << " " << e;
	cout << endl;
	return 0;
}
