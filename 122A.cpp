#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool lucky(int n) {
	while(n) {
		int d=n%10; n/=10;
		if(d!=4&&d!=7)
			return false;
	}
	return true;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	for (int d=1; d<=n; d++) {
		if(n%d) continue;
		if(lucky(d)) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
