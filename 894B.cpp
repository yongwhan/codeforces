#include<cstdio>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<sstream>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

typedef long long ll;

/*
int cand[]={-1, 1};

bool ok(vector<int> &v, int n, int m, int k) {
	int grid[n][m], idx=0;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)	
			grid[i][j]=v[idx++];

	for (int i=0; i<n; i++) {
		int cur=1;
		for (int j=0; j<m; j++)
			cur*=grid[i][j];
		if(cur!=k) return false;
	}

	for (int j=0; j<m; j++) {
		int cur=1;
		for (int i=0; i<n; i++)
			cur*=grid[i][j];
		if(cur!=k) return false;
	}
	return true;
}

int eval(int n, int m, int k) {
	int sz=n*m, ret=0;
	for (int bt=0; bt<(1<<sz); bt++) {
		vector<int> cur(sz,-1);
		for (int i=0; i<sz; i++)
			if(bt&(1<<i)) cur[i]=1;
		if(ok(cur,n,m,k)) ret++;
	}
	return ret;
}
*/

const ll p=1e9+7;

/* This function calculates (ab)%c */
int modulo(ll a, ll b, ll c) {
	long long x=1,y=a; // long long is taken to avoid overflow of intermediate results
	while(b > 0) {
		if(b%2 == 1) x=(x*y)%c;
		y = (y*y)%c; // squaring the base
		b /= 2;
 }
	return x%c;
}

/* this function calculates (a*b)%c taking into account that a*b might overflow */
long long mulmod(long long a, long long b, long long c) {
	long long x = 0,y=a%c;
	while(b > 0) {
		if(b%2 == 1) x = (x+y)%c;
		y = (y*2)%c;
		b /= 2;
	}
	return x%c;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,m,k; cin>>n>>m>>k;
	ll a=n%2, b=m%2, ret=-1;
	if(a+b==1 && k==-1) ret=0;
	else ret=modulo(2,mulmod(n-1, m-1, p-1), p);
	cout << ret << endl;
/*
	int iter=0;
	for (int idx=0; idx<2; idx++) {
		int k=cand[idx];
		for (int n=1; n<=5; n++) {
			for (int m=n; m<=5; m++) {
cout << ++iter << " " << n << " " << m << " " << k << endl;
				int a=n%2, b=m%2;
				int ans=-1, cor=eval(n,m,k);
				if(a+b==1 && k==-1) ans=0;
				else ans=1<<( (n-1)*(m-1) );
				if(cor!=ans) cout << "WRONG" << ans << "/" << cor << endl;
			}
		}
	}
*/
	return 0;
}
