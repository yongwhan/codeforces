#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	for (int i=0; i<n; i++) {
		int star=abs(n/2-i), dia=n-2*star;
		cout << string(star,'*') << string(dia,'D') << string(star,'*') << endl;
	}
	return 0;
}
