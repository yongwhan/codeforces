#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	for (int i=0; i<(1<<n); i++) {
		int ret=0;
		for (int j=0; j<n; j++)
			if(i&(1<<j))
				ret=(ret+a[j])%360;
			else
				ret=(ret+360-a[j])%360;
		if(ret%360==0) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
