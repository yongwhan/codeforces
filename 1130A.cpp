#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,pos=0,neg=0,cutoff,x; cin>>n;
	for (int i=0; i<n; i++) {
		cin>>x;
		if(x>0) pos++;
		else if(x<0) neg++;
	}
	cutoff=(n+1)/2;
	if(pos>=cutoff) cout << 1 << endl;
	else if(neg>=cutoff) cout << -1 << endl;
	else cout << 0 << endl;
	return 0;
}
