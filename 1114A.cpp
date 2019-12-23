#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int x,y,z,a,b,c; cin>>x>>y>>z>>a>>b>>c;
	cout << ((a>=x)&&(a+b>=x+y)&&(a+b+c>=x+y+z) ? "YES" : "NO") << endl;
	return 0;
}
