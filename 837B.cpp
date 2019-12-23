#include<bits/stdc++.h>
using namespace std;

const int mx=105;
char g[mx][mx][2], ch;
bool ok(int t, int n, int m) {
	if(n%3) return false;
	int width=n/3;
	set<char> used;
	for (int k=0; k<3; k++) {
		set<char> st;
		for (int i=k*width; i<(k+1)*width; i++) for (int j=0; j<m; j++)
			ch=g[i][j][t], st.insert(ch), used.insert(ch);
		if(st.size()>1) return false;
	}
	return used.size()==3;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	for (int i=0; i<n; i++) for (int j=0; j<m; j++)
		cin>>ch, g[i][j][0]=g[j][i][1]=ch;
	if(ok(0,n,m)||ok(1,m,n)) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
