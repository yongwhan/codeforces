#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b,c; cin>>a>>b>>c;
	cout << max({a*b+c,a*(b+c), a+b*c, (a+b)*c, a*b*c, a+b+c}) << endl;
	return 0;
}
