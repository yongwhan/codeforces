#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mx=1e6+77;

vector<int> g(mx,-1);
vector<vector<int>> pre(10, vector<int>(mx,0));
int f(int x) {
	int ret=1;
	while(x) {
		int d=x%10; x/=10;
		if(d) ret*=d;
	}
	return ret;
}

int main() {
	for (int i=1; i<10; i++) g[i]=i;
	for (int i=10; i<mx; i++) g[i]=g[f(i)];
	for (int i=1; i<mx; i++) pre[g[i]][i]++;
	for (int i=1; i<mx; i++) for (int j=0; j<10; j++) pre[j][i]+=pre[j][i-1];
		int Q,l,r,k; cin>>Q;
	while(Q--) {
		cin>>l>>r>>k;
		cout << pre[k][r]-pre[k][l-1] << endl;
	}
	return 0;
}
