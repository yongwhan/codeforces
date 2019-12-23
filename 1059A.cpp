#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,L,a; cin>>n>>L>>a;
	vector<int> t(n+2), l(n+2);
	t[0]=0; l[0]=0;
	for (int i=1; i<=n; i++) cin>>t[i]>>l[i];
	t[n+1]=L; l[n+1]=0;
	int ret=0;
	for (int i=0; i<=n; i++)
		ret+=(t[i+1]-(t[i]+l[i]))/a;
	cout << ret << endl;
	return 0;
}
