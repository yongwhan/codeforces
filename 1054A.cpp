#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int x,y,z,t1,t2,t3; cin>>x>>y>>z>>t1>>t2>>t3;
	cout << ((((abs(z-x)+abs(x-y))*t2+3*t3)<=(abs(x-y)*t1)) ? "YES" : "NO") << endl;
	return 0;
}
