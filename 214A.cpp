#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,ret=0; cin>>n>>m;
	for (int a=0; a<=1000; a++)
		for (int b=0; b<=1000; b++)
			if(a*a+b==n&&a+b*b==m)
				ret++;
	cout << ret << endl;
	return 0;
}
