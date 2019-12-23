#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,t;
vector<int> v[N];
int vis[N],cnt[N];
int main() {
	cin>>n;
	int x,y,z;
	for(int i=1; i<=n-2; i++) {
		scanf("%d %d %d",&x,&y,&z);
		v[x].push_back(y),v[x].push_back(z);
		v[y].push_back(x),v[y].push_back(z);
		v[z].push_back(x),v[z].push_back(y);
		cnt[x]++,cnt[y]++,cnt[z]++;
	}
	for(int i=1; i<=n; i++) {
		if(cnt[i]==1) {
			x=i;
			break;
		}
	}
	if(cnt[v[x][0]]==2) y=v[x][0];
	else y=v[x][1];
	vis[x]=vis[y]=1;
	cout<<x<<" "<<y<<" ";
	for(int i=1; i<=n-2; i++){
		int z;
		for(int j=0; j<v[x].size(); j++)
			if(!vis[v[x][j]])
				z=v[x][j];
		vis[z]=1;
		cout<<z<<" ";
		x=y; y=z;
	}
	cout<<"\n";
	return 0;
}
