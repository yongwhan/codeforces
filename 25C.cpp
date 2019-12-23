#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mx=307;
ll dist[mx][mx];

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,k,a,b,c; cin>>n;
	for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin>>dist[i][j];
	for (int k=0; k<n; k++) for (int i=0; i<n; i++) for (int j=0; j<n; j++)
		dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
	cin>>k;
	while(k--) {
		cin>>a>>b>>c; a--; b--;
		dist[a][b]=dist[b][a]=min(dist[a][b],c);
		for (int i=0; i<n; i++) for (int j=0; j<n; j++)
			dist[i][j]=dist[j][i]=min({dist[i][j], dist[i][a]+c+dist[b][j], dist[i][b]+c+dist[a][j]});
		ll ret=0;
		for (int i=0; i<n; i++) for (int j=i+1; j<n; j++) ret+=dist[i][j];
		cout << ret << " ";
	}
	cout << endl;
	return 0;
}
