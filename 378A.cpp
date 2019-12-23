#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b,p=0,q=0,r=0; cin>>a>>b;
	for (int x=1; x<=6; x++) {
		int u=abs(a-x), v=abs(b-x);
		if(u==v) q++;
		else if(u<v) p++;
		else r++;
	}
	cout << p << " " << q << " " << r << endl;
	return 0;
}
