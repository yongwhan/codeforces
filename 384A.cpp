#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	cout << (n*n+1)/2 << endl;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++)
			if((i+j)%2==0) cout << 'C';
			else cout << '.';
		cout << endl;
	}
	return 0;
}
