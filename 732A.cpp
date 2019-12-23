#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int k,r; cin>>k>>r;
	for (int i=1; i<=10; i++) {
		int x=(k*i)%10;
		if(x==0||x==r) {
			cout << i << endl;
			return 0;
		}
	}
	return 0;
}
