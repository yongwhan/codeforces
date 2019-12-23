#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,ret=0; cin>>n;
	for (int d=2; d<=n; d++) if(n%d==0) ret++;
	cout << ret << endl;
	return 0;
}
