#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,k; cin>>n>>k;
	vector<ll> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	ll cur=0;
	for (int i=0; i<k; i++)
		cur+=a[i];
	ll sum=cur, ct=1;
	for (int i=k; i<n; i++)
		cur+=a[i], cur-=a[i-k], sum+=cur, ct++;
	cout << setprecision(12) << fixed << double(sum)/ct << endl;
	return 0;
}
