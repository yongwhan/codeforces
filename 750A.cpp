#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	int cur=240-k;
	for (int i=1; i<=n; i++) {
		int val=5*i;
		if(cur<val) {
			cout << i-1 << endl;
			return 0;
		}
		cur-=val;
	}
	cout << n << endl;
	return 0;
}
