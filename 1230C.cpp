#include<bits/stdc++.h>
using namespace std;

const int mx=17;

bool g[mx][mx];

int main () {
	int n,m; cin>>n>>m;
	if(n<=6){
		cout<<m<<endl;
		return 0;
	}
	for (int i=0; i<m; i++) {
		int a,b; cin>>a>>b;
		g[a][b]=g[b][a]=true;
	}
	int mn=INT_MAX;
	for (int i=1; i<=7; i++) {
		for (int j=1; j<=7; j++) {
			int x=0; 
			for (int k=1; k<=7; k++)
				if(g[i][k]&&g[k][j])
					x++;
			mn=min(mn,x);
		}
	}
	cout<<m-mn<<"\n";
	return 0;
}
