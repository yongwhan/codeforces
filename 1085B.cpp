#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	int ret=1e9;
	for (int v=1; v<k; v++)
		if(n%v==0)
			ret=min(ret,(n/v)*k+v);
	cout << ret << endl;
	return 0;
}
