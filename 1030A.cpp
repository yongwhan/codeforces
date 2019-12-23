#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,ret=0,x; cin>>n;
	while(n--)
		cin>>x, ret+=x;
	cout << (ret ? "HARD" : "EASY") << endl;
	return 0;
}
