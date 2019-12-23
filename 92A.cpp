#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	m%=(n*(n+1)/2);
	for (int i=1; i<=n; i++) {
		if(m<i)
			break;
		m-=i;
	}
	cout << m << endl;
	return 0;
}
