#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=1077;
bool g[mx][mx];

ll eval(int n, int m) {
	ll ret=0;
	for (int i=1; i<=n; i++)
		for (int j=1; j<=m; j++)
			if(g[i-1][j-1])
				ret++;
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,m; cin>>n>>m;
	for (int i=1; i<=m; i++)
		for (int j=1; j<=m; j++)
			g[i-1][j-1]=((i*i+j*j)%m==0);
	ll q=n/m, r=n%m;
	cout << q*q*eval(m,m)+2*q*eval(m,r)+eval(r,r) << endl;
	return 0;
}
