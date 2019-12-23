#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int ceil(int n, int k) {
	return (n+k-1)/k;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	cout << ceil(2*n,k)+ceil(5*n,k)+ceil(8*n,k) << endl;
	return 0;
}
