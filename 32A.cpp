#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,d; cin>>n>>d;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	int ret=0;
	for (int i=0; i<n; i++)
	for (int j=0; j<n; j++)
		if(i!=j&&abs(a[i]-a[j])<=d)
			ret++;
	cout << ret << endl;
	return 0;
}
