#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=1050;
ll binom[mx][mx];

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	for (int i=0; i<mx; i++) {
		binom[i][0]=binom[i][i]=1;
		for (int j=1; j<i; j++)
			binom[i][j]=binom[i-1][j]+binom[i-1][j-1];
	}

	// first five terms of derangement sequence. in general, n! * (sum (-1)^i/i!)
	vector<int> mul={1, 0, 1, 2, 9};
	int n,k; cin>>n>>k;
	ll ret=0;
	for (int i=0; i<=k; i++)
		ret+=mul[i]*binom[n][i];
	cout << ret << endl;
	return 0;
}
