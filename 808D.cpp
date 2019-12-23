#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<ll> a(n);
	multiset<ll> mst,mst2;
	ll sum=0;
	for (int i=0; i<n; i++) cin>>a[i], sum+=a[i], mst.insert(a[i]);
	mst2=mst;
	if(sum%2) {
		cout << "NO" << endl;
		return 0;
	}
	ll target=sum/2, pre=0, suf=0;
	for (int i=0; i<n; i++) {
		pre+=a[i];
		mst.erase(mst.find(a[i]));
		if(mst.find(target-pre)!=mst.end()) {
			cout << "YES" << endl;
			return 0;
		}
	}
	for (int i=n-1; i>=0; i--) {
		suf+=a[i];
		mst2.erase(mst2.find(a[i]));
		if(mst2.find(target-suf)!=mst2.end()) {
			cout << "YES" << endl;
			return 0;
		}
	}
	pre=0, suf=0;
	for (int i=0; i<n; i++) {
		pre+=a[i]; suf+=a[n-1-i];
		if(pre==target||suf==target) {
			cout << "YES" << endl;
			return 0;
		}
	}
	for (int i=0; i<n; i++) {
		if(sum-a[i]==target) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
