#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n; n>>=1;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	sort(a.begin(),a.end());
	int x=0, y=0, u=1, v=2;
	for (int i=0; i<n; i++) {
		x+=abs(a[i]-u);
		y+=abs(a[i]-v);
		u+=2; v+=2;
	}
	cout << min(x,y) << endl;
	return 0;
}
