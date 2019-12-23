#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n; cin>>n;
	vector<ll> a(n);
	int pos=0, neg=0;
	ll ret=0;
	for (int i=0; i<n; i++) {
		cin>>a[i];
		if(a[i]>0) pos++;
		else if(a[i]<0) neg++;
		ret+=abs(a[i]);
	}

	if(n==1) {
		cout << a[0] << endl;
		return 0;
	}

	if(pos!=n&&neg!=n) {
		cout << ret << endl;
		return 0;
	}
	if(neg==n)
		for (int i=0; i<n; i++)
			a[i]=-a[i];
	sort(a.begin(), a.end());
	ret-=a[0]*2;
	cout << ret << endl;
	return 0;
}
