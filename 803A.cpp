#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	if(n*n<k) {
		cout << -1 << endl;
		return 0;
	}
	int m[n][n];
	for (int i=0; i<n; i++) for (int j=0; j<n; j++) m[i][j]=0;
	for (int i=0; i<n; i++) {
		if(!k) break;
		m[i][i]=1;
		k--;
		for (int j=i+1; j<n; j++) {
			if(k<2) break;
			m[i][j]=m[j][i]=1, k-=2;
		}
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if(j) cout << " ";
			cout << m[i][j];
		}
		cout << endl;
	}
	return 0;
}
