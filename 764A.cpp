#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,z,ret=0; cin>>n>>m>>z;
	for (int i=1; i<=z; i++)
		if(i%n==0&&i%m==0)
			ret++;
	cout << ret << endl;
	return 0;
}
