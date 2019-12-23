#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,ret=0; cin>>n;
	for (int a=1; a<=n; a++) for (int b=a; b<=n; b++) {
		int c=a^b;
		if(b<=c&&c<=n&&a+b>c) ret++;
	}
	cout << ret << endl;
	return 0;
}
