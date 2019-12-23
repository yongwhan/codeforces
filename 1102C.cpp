#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x,y; cin>>n>>x>>y;
	if(x>y) {
		cout << n << endl;
		return 0;
	}
	int ct=0,a;
	for (int i=0; i<n; i++) {
		cin>>a;
		if(a<=x) ct++;
	}

	cout << (ct+1)/2 << endl;
	return 0;
}
