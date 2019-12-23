#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a,cur=0; cin>>n;
	for (int i=1; i<=n; i++) {
		cin>>a;
		if(cur==a) cur++;
		else {
			if(cur<a) { cout << i << endl; return 0; }
		}
	}
	cout << -1 << endl;
	return 0;
}
