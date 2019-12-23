#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;

	int sz=n/2;
	if(n%2) {
		sz=(n-1)/2;
		cout << sz << endl;
		cout << 3 << " ";
		sz--;
	} else cout << sz << endl;

	for (int i=0; i<sz; i++)
		cout << 2 << " ";
	cout << endl;
	return 0;
}
