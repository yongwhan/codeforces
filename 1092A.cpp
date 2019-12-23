#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int n,k; cin>>n>>k;
		for (int i=0; i<n; i++)
			cout<<char((i%k)+'a');
		cout<<"\n";
	}
	return 0;
}
