#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	if(n%2) {
		cout << -1 << endl;
		return 0;
	}
	for (int i=1; i<=n; i+=2)
		cout << i+1 << " " << i << " ";
	cout << endl;
	return 0;
}
