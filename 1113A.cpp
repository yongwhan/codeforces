#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,v; cin>>n>>v;
	v=min(v,n-1);
	int ret=v;
	for (int i=2; i<=n-v; i++)
		ret+=i;
	cout << ret << endl;
	return 0;
}
