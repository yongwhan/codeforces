#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int q; cin>>q;
	while(q--) {
		int n; string s; cin>>n>>s;
		string a=s.substr(0,1), b=s.substr(1);
		if(a.size()>b.size() || (a.size()==b.size() && a>=b)) cout << "NO" << endl;
		else cout << "YES" << endl << 2 << endl << a << " " << b << endl;
	}
	return 0;
}
