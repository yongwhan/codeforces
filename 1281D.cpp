#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

const int mx=65;
char g[mx][mx];

int eval(int n, int m) {
	bool P=false, A=false;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++) {
			if(g[i][j]=='P')
				P=true;
			if(g[i][j]=='A')
				A=true;
		}
	if(!P) return 0;
	if(!A) return -1;

	for (int i=0; i<n; i+=max(1,n-1)) {
		bool P=false;
		for (int j=0; j<m; j++)
			if(g[i][j]=='P')
				P=true;
		if(!P) return 1;
	}

	for (int j=0; j<m; j+=max(1,m-1)) {
		bool P=false;
		for (int i=0; i<n; i++) 
			if(g[i][j]=='P')
				P=true;
		if(!P) return 1;
	}

	if(g[0][0]=='A'||g[0][m-1]=='A'||g[n-1][0]=='A'||g[n-1][m-1]=='A')
		return 2;

	int top=0, bot=0;
	for (int i=0; i<n; i++) {
		int cur=0;
		for (int j=0; j<m; j++) {
			if(g[i][j]=='P')
				break;
			cur++;
		}
		top=max(top,cur);
	}

	for (int i=0; i<n; i+=max(1,n-1)) {
		int cur=0;
		for (int j=m-1; j>=0; j--) {
			if(g[i][j]=='P')
				break;
			cur++;
		}
		bot=max(bot,cur);
	}
	if(top+bot>=m)
		return 2;

	top=0, bot=0;
	for (int j=0; j<m; j++) {
		int cur=0;
		for (int i=0; i<n; i++) {
			if(g[i][j]=='P')
				break;
			cur++;
		}
		top=max(top,cur);
	}
	for (int j=0; j<m; j+=max(1,m-1)) {
		int cur=0;
		for (int i=n-1; i>=0; i--) {
			if(g[i][j]=='P')
				break;
			cur++;
		}
		bot=max(bot,cur);
	}
	if(top+bot>=n)
		return 2;

	for (int i=0; i<n; i++)
		if(g[i][0]=='A'||g[i][m-1]=='A')
			return 3;
	for (int j=0; j<m; j++)
		if(g[0][j]=='A'||g[n-1][j]=='A')
			return 3;
	return 4;
}

int main() {
	int t; scanf("%d",&t);
	while(t--) {
		int n,m; scanf("%d %d",&n,&m);
		for (int i=0; i<n; i++)
			scanf("%s",&g[i]);
		int ret=eval(n,m);
		if(ret==-1) printf("MORTAL\n");
		else printf("%d\n",ret);
	}
	return 0;
}
