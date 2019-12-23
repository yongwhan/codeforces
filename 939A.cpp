#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> f(n);
	for (int i=0; i<n; i++)
		cin>>f[i], f[i]--;
	for (int i=0; i<n; i++) {
		int a=i, b=f[a], c=f[b];
		if(a!=b&&b!=c&&c!=a&&f[c]==a) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
