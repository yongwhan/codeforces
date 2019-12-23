#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x,ret=0,cur=0; cin>>n;
	for (int i=1; i<=n; i++) {
		cin>>x;
		cur=max(cur,x);
		if(i==cur)
			ret++;
	}
	cout << ret << endl;
	return 0;
}
