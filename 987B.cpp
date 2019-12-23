#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	double x,y; cin>>x>>y;
	double u=y*log(x), v=x*log(y);
	if(u>v+1e-6) cout << ">" << endl;
	else if(u+1e-6<v) cout << "<" << endl;
	else cout << "=" << endl;
	return 0;
}
