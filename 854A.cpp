#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool coprime(int a, int b) {
	for (int d=min(a,b); d>=1; d--)
		if(a%d==0&&b%d==0)
			return d==1;
	return false;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x=-1,y=-1; cin>>n;
	for (int a=1; a<=n; a++) {
		int b=n-a;
		if(a<b && coprime(a,b))
			x=a, y=b;
	}
	cout << x << " " << y << endl;
	return 0;
}
