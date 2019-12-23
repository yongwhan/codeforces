#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int dist(int a, int b) {
	if(a>b) swap(a,b);
	int l=b-a+1;
	return l*(l-1)/2;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b; cin>>a>>b;
	if(a>b) swap(a,b);
	int ret=1e9;
	for (int x=a; x<=b; x++)
		ret=min(ret,dist(x,a)+dist(x,b));
	cout << ret << endl;
	return 0;
}
