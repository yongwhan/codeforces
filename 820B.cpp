#include<bits/stdc++.h>
using namespace std;

int diff(int v, int w, int a, int n) {
		return abs(180*(n-(w-v))-a*n);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a; cin>>n>>a;
	int v1=1,v2=2,v3=3;
	for (int i=4; i<=n; i++)
		if(diff(v1,i,a,n)<diff(v1,v3,a,n))
			v3=i;
	cout << v1 << " " << v2 << " " << v3 << endl;
	return 0;
}
