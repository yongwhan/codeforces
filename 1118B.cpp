#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	int x=0, y=0;
	for (int i=0; i<n; i++)
		if(i%2) y+=a[i];
		else x+=a[i];

	x-=a[0];
	int p=0, q=0, ret=0;
	for (int i=1; i<=n; i++) {
		if(p+x==q+y)
			ret++;
		if(i==n)
			break;
		if(i%2) y-=a[i], q+=a[i-1];
		else x-=a[i], p+=a[i-1];
	}
	cout << ret << endl;
	return 0;
}
