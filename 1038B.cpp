#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	if(n<=2) { cout << "No" << endl; return 0; }
	cout << "Yes" << endl;
	cout << 1 << " " << n << endl;
	cout << n-1;
	for (int i=1; i<n; i++)
		cout << " " << i;
	cout << endl;
	return 0;
}
