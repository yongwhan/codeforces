#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a,b,c; cin>>n>>a>>b>>c;
	n<<=1;
	int ret=0;
	for (int i=0; i<=b; i++) {
		for (int j=0; j<=c; j++) {
			int cur=n-i*2-j*4;
			if(cur<0)
				continue;
			ret+=int(cur<=a);
		}
	}
	cout << ret << endl;
	return 0;
}
