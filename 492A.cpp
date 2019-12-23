#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int l, i=1, r=0;
	cin>>l;
	while(1) {
		r+=i;
		if(l<r) {
			cout << i-1 << endl;
			return 0;
		}
		l-=r;
		i++;
	}
}
