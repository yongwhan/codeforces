#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,h,ret=0,a; cin>>n>>h;
	for (int i=0; i<n; i++) {
		cin>>a;
		ret+=((a<=h) ? 1 : 2);
	}
	cout << ret << endl;
	return 0;
}
