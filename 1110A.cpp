#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int b,k,ret=0,a; cin>>b>>k;
	for (int i=0; i<k; i++)
		cin>>a, ret*=b, ret+=a, ret%=2;
	cout << (ret ? "odd" : "even") << endl;
	return 0;
}
