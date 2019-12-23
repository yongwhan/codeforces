#include<bits/stdc++.h>
using namespace std;

const int mx=1e5+77, inf=1e9;
int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<bool> flag(mx,true);
	flag[0]=flag[1]=false;
	for (int i=2; i*i<mx; i++) if(flag[i]) for (int j=i; j*i<mx; j++) flag[i*j]=false;
	int n,m,p=-1; cin>>n>>m;
	for (int i=n; i<mx; i++) if(flag[i]) { p=i; break; }
	cout << p << " " << p << endl;
	for (int i=1; i<n-1; i++) cout << i << " " << i+1 << " " << 1 << endl, p--, m--;
	cout << n-1 << " " << n << " " << p << endl, m--;
	for (int i=0; i<n; i++) {
		for (int j=i+2; j<n; j++) {
			if(!m) return 0;
			cout << i+1 << " " << j+1 << " " << inf << endl, m--;
		}
	}
}
