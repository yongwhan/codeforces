#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	vector<string> ret(4);
	string line=string(n,'.');
	for (int i=0; i<4; i++) ret[i]=line;
	if(k%2)
		k--, ret[1][n/2]='#';
	for (int j=1; j<=2; j++) {
		for (int i=1; i<n/2; i++) {
			if(!k) break;
			ret[j][i]=ret[j][n-1-i]='#';
			k-=2;
		}
	}
	if(k)
		ret[1][n/2]=ret[2][n/2]='#';

	cout << "YES" << endl;
	for (auto it : ret)
		cout << it << endl;
	return 0;
}
