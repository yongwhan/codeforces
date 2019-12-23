#include<cstdio>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<sstream>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	for (int i=0; i<n; i++) {
		ll a,b,x;
		cin>>a>>b;
		x=ll(pow(a*b,1./3)+1e-3);
		if(ll(pow(x,3)+1e-3)!=a*b) cout << "No" << endl;
		else if(a%x==0&&b%x==0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
