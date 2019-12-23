#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n, mul=1; cin>>n;
	while(1) {
		if(n==1) cout << mul << endl;
		else if(n==2) cout << mul << " " << mul*2 << endl;
		else if(n==3) cout << mul << " " << mul << " " << mul*3 << endl;
		if(n<=3) return 0;

		int m=(n+1)/2;
		for (int i=0; i<m; i++) cout << mul << " ";
		n-=m;
		mul*=2;
	}
	return 0;
}
