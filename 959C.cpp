#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	if(n<6) cout << -1 << endl;
	else {
		cout << "1 2\n1 3\n1 4\n2 5\n2 6\n";
		for (int i=7; i<=n; i++)
			cout << 1 << " " << i << endl;
	}
	for (int i=2; i<=n; i++)
		cout << 1 << " " << i << endl;
	return 0;
}
