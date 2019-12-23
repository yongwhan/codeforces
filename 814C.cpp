#include<bits/stdc++.h>
using namespace std;

int ret[26][1577];
int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,q,m; char c; string s; cin>>n>>s;
	for (char ch='a'; ch<='z'; ch++) {
		int idx=ch-'a';
		for (int i=0; i<n; i++) {
			int cur=0;
			for (int j=i; j<n; j++) {
				if(s[j]!=ch) cur++;
				ret[idx][cur]=max(ret[idx][cur],j-i+1);
			}
		}
		for (int i=1; i<=n; i++) ret[idx][i]=max(ret[idx][i],ret[idx][i-1]);
	}
	cin>>q;
	while(q--) cin>>m>>c, cout<<ret[c-'a'][m]<<endl;
	return 0;
}
