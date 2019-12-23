#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	int t=2*k+1;
	int q=(n+t-1)/t, r=min(k+1,(n-1)%t+1);
	cout << q << endl;
	for (int i=0; i<q; i++)
		cout << r << " ", r+=t;
	cout << endl;
	return 0;
}
