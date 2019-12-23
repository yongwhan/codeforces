#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n, ret=0, a; cin>>n;
	for (int i=0; i<n; i++)
		cin>>a, ret+=4*(a*i);
	cout << ret << endl;
	return 0;
}
