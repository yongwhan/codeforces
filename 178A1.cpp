#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int eval(int x) {
	int ret=0;
	while(x)
		x/=2, ret++;
	return ret-1;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<ll> a(n);
	for (int i=0; i<n; i++) cin>>a[i];

	ll cur=0;
	for (int i=0; i<n-1; i++) {
		int ex=eval(n-1-i);
		cur+=a[i];
		a[i+(1<<ex)]+=a[i];
		a[i]=0;
		cout << cur << endl;
	}
	return 0;
}
