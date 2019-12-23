#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,ct=0; ll x; cin>>n>>x;
	for (int i=0; i<n; i++) {
		char op; int d; cin>>op>>d;
		if(op=='+') x+=d;
		else {
			if(x>=d) x-=d;
			else ct++;
		}
	}
	cout << x << " " << ct << endl;
	return 0;
}
