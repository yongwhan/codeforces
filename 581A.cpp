#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b; cin>>a>>b;
	int x=min(a,b);
	cout << x;
	a-=x; b-=x;
	cout << " " << a/2 + b/2 << endl;
	return 0;
}
