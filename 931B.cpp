#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a,b; cin>>n>>a>>b;
	a--; b--;
	int ret=0;
	while(1) {
		if(a==b) break;
		ret++;
		a>>=1; b>>=1; n>>=1;
	}
	if(n==1) cout << "Final!" << endl;
	else cout << ret << endl;
	return 0;
}
