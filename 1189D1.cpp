#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,u,v; cin>>n;
	vector<int> deg(n,0);
	for (int i=0; i<n-1; i++)
		cin>>u>>v, u--, v--, deg[u]++, deg[v]++;
	for (auto x : deg)
		if(x==2) {
			cout<<"NO"<<endl; return 0;
		}
	cout<<"YES"<<endl;
	return 0;
}
