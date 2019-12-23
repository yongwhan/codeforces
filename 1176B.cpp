#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int n,x; cin>>n;
		map<int,int> ct;
		for (int i=0; i<n; i++)
			cin>>x, ct[x%3]++;
		int ret=ct[0];
		int cur=min(ct[1],ct[2]);
		ret+=cur;
		ct[1]-=cur;
		ct[2]-=cur;
		ret+=ct[1]/3;
		ret+=ct[2]/3;
		cout<<ret<<endl;
	}
	return 0;
}
