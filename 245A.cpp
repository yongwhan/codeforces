#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<int> s(3,0), f(3,0);
	int n; cin>>n;
	while(n--) {
		int t,x,y; cin>>t>>x>>y;
		s[t]+=x;
		f[t]+=y;
	}
	for (int t=1; t<=2; t++)
		cout << ((s[t]>=f[t]) ? "LIVE" : "DEAD") << endl;
	return 0;
}
