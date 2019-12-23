#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	cout << n+n/2 << endl;
	for (int j=0; j<3; j++)
		for (int i=1+(1-(j%2)); i<=n; i+=2)
			cout << i << " ";
	cout << endl;
	return 0;
}
