#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,m,k; cin>>n>>m>>k;
	vector<ll> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	sort(a.begin(), a.end(), greater<ll>());
	k++;
	int q=m/k, r=m%k;
	cout << q*(a[0]*(k-1)+a[1])+a[0]*r << endl;
	return 0;
}
