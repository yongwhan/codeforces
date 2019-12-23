#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	int b=a[0], ret=1, ct=1;
	for (int i=1; i<n; i++) {
		if(a[i]<=2*b) ct++;
		else ct=1;
		b=a[i];
		ret=max(ret,ct);
	}
	cout << ret << endl;
	return 0;
}
