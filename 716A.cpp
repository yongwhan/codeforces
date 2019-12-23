#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,c; cin>>n>>c;
	int ret=1, tp, tc;
	cin>>tc;
	for (int i=0; i<n-1; i++) {
		tp=tc;
		cin>>tc;
		if(tc-tp>c) ret=1;
		else ret++;
	}
	cout << ret << endl;
	return 0;
}
