#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int a,b,n; cin>>a>>b>>n;
		vector<int> ret={a,b,a^b};
		cout<<ret[n%3]<<endl;
	}
	return 0;
}
