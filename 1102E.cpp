#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod=998244353;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n, ct=-1, i=0; cin>>n;
	vector<int> a(n);
	map<int,int> last;
	for (int i=0; i<n; i++)
		cin>>a[i], last[a[i]]=i;
	while(i<n) {
		int right=last[a[i]];
		while(i<right)
			right=max(right, last[a[++i]]);
		if(right==i++)
			ct++;
	}
	ll ret=1;
	for (int i=0; i<ct; i++)
		ret=(ret*2)%mod;
	cout << ret << endl;
	return 0;
}
