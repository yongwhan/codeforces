#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string a,b,c; cin>>a>>b>>c;
	a+=b;
	sort(a.begin(), a.end());
	sort(c.begin(), c.end());
	cout << (a==c ? "YES" : "NO") << endl;
	return 0;
}
